#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ui64;
struct nodo
{
    int maximo, minimo, mcd, suma;
    void unir(const nodo &a, const nodo &b)
    {
        // maximo = max(a.maximo, b.maximo);
        // minimo = min(a.minimo, b.minimo);
        // mcd = __gcd(a.mcd, b.mcd);
        suma = a.suma + b.suma;
    }
    void iniciar(int v)
    {
        maximo = minimo = mcd = suma = v;
    }
};

int I, J, V, POS;
int p[205000];
nodo T[805000];
void init(int N, int L, int R)
{
    if (L == R) T[N].iniciar(p[L]);
    else
    {
        int M = (L+R)/2, A = N*2, B = N*2+1;
        init(A, L, M);
        init(B, M+1, R);
        T[N].unir(T[A], T[B]);
    }
}

void update(int N, int L, int R)
{
    if (L == R)
        p[POS] = V, T[N].iniciar(V);
    else
    {
        int M = (L+R)/2, A = N*2, B = N*2+1;
        if (POS <= M) update(A, L, M);
        else update(B, M+1, R);
        T[N].unir(T[A], T[B]);
    }
}

nodo query(int N, int L, int R)
{
    if (I <= L && R <=J) return T[N];
    else
    {
        int M = (L+R)/2, A = N*2, B = A*2 + 1;
        if (J <= M) return query(A, L, M);
        else if (I > M) return query(B, M+1, R);
        else
        {
            nodo ans;
            ans.unir(query(A, L, M), query(B, M+1, R));
            return ans;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(false);
    int n, t, op;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> p[i];
    init(1, 0, n-1);
    cin >> t;
    while (t--)
    {
        cin >> op;
        if (op == 1)
        {
            cin >> I >> J;
            I--;
            J--;
            cout << query(1, 0, n-1).suma << endl;
        }
        else
        {
            cin >> POS >> V;
            POS--;
            update(1, 0, n-1);
        }
    }
}
