#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
const int MAXN = 100005;
vector < vector <int> > g;
bool vis[MAXN];

void dfs(int u) {
	vis[u] = true;
	int v;
	for(int i = 0; i < (int)g[u].size(); ++i) {
		v = g[u][i];
		if(vis[v] == false)
			dfs(v);
	}
}

int main() {
	int v, e, s, f; 
	cin >> v >> e;
	g.assign(v + 5, vector <int>());
	memset(vis, false, sizeof vis); 
	for(int i = 0; i < e; ++i) {
		cin >> s >> f;
		g[s].push_back(f);
		g[f].push_back(s);
	}
	dfs(1);
	return 0;
}
