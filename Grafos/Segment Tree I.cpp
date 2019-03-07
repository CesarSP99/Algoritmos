#include <iostream>
#include <string>
#include <climits>
using namespace std;
typedef long long i64;
i64 arr[500050];
i64 tree[4*500050];

void init(int node, int a, int b)
{
	if(a == b)
	{
		tree[node] = arr[a];
		return;
	}
	init(2*node+1,a,(a+b)>>1);
	init(2*node+2,((a+b)>>1)+1,b);
	tree[node] = tree[2*node+1] + tree[2*node+2];
}

i64 query(int node, int a, int b, i64 p, i64 q)
{
	// aca viene el valor neutro que les mencione, para que no afecte las operaciones ..
	// si es que es un nodo fuera del rango. cambiar para lo que pide el problema
	if(q < a || b < p)
		return 0;
		
	if(p <= a && b <= q)
		return tree[node];
	// aca esta la operacion. se puede cambiar para sacar maximos, minimos asi:
	// return max(query(2*node+1,a,(a+b)>>1,p,q), query(2*node+2,((a+b)>>1)+1,b,p,q));
	// return min(query(2*node+1,a,(a+b)>>1,p,q), query(2*node+2,((a+b)>>1)+1,b,p,q));
	return query(2*node+1,a,(a+b)>>1,p,q) + query(2*node+2,((a+b)>>1)+1,b,p,q);
}

void update(int node, int a, int b, i64 p, i64 v)
{
	if(p < a || b < p)
		return;
	if(a == b)
	{
		tree[node] = v;
		return;
	}
	update(2*node+1, a, (a+b)>>1, p, v);
	update(2*node+2, ((a+b)>>1)+1, b, p, v);
	// aca esta la operacion. se puede cambiar para sacar maximos, minimos asi:
	// tree[node] = max(tree[2*node+1], tree[2*node+2]); y para minimo cambian max.
	tree[node] = tree[2*node+1] + tree[2*node+2];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	i64 a, b;
	string s;
	cin >> n;
	for(int i = 0; i < n; i++) cin >> arr[i];
	init(0,0,n-1);
	while(cin >> s)
	{
		cin >> a >> b;
		if(s == "sum")
		{
			a--, b--;
			cout << query(0,0,n-1,a,b) << '\n';
		}
		else
		{
			a--;
			update(0,0,n-1,a,b);
		}
	}
	return 0;
}
