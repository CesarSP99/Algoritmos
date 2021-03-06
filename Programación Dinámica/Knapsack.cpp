#include <bits/stdc++.h>
using namespace std;
int mochila(int i, int c);
int maxn(int a, int b) { return (a > b) ? a : b; }
int g[100], p[100];
int mem[100][100];
int n;
int main()
{
    int w;
    memset(mem, -1, sizeof(mem));
    cin >> n >> w;
    for (int i = 0; i < n; ++i) cin >> g[i] >> p[i];
    cout << mochila(0, w);
    return 0;
}

int mochila(int i, int c)
{
    int ans1 = 0, ans2;
    if (i == n) return 0;
    if (mem[i][c] != -1) return mem[i][c];
    if (p[i] <= c) ans1 = mochila(i+1, c-p[i]) + g[i];
    ans2 = mochila(i+1, c);
    return mem[i][c] = maxn(ans1, ans2);
}
