#include <iostream>
using namespace std;
char g[105][105];
int r, c;
int dy[] = {1,1,0,-1,-1,-1,0,1};
int dx[] = {0,1,1,1,0,-1,-1,-1};

void floodfill(int rr, int cc) {
	g[rr][cc] = '-';
	int xx, yy;
	for(int i = 0; i < 8; ++i) {
		xx = dx[i] + rr;
		yy = dy[i] + cc;
		if(xx < 0 || xx >= r || yy < 0 || yy >= c || g[xx][yy] != '@')
			continue;
		floodfill(xx, yy);
	}
}

int main() {
	int cnt;
	while(cin >> r >> c, r || c) {
		cnt = 0;
		for(int i = 0; i < r; ++i)
			for(int j = 0; j < c; ++j)
				cin >> g[i][j];
				
		for(int i = 0; i < r; ++i) {
			for(int j = 0; j < c; ++j) {
				if(g[i][j] == '@') {
					++cnt;
					floodfill(i, j);
				}
			}
		}
		cout << cnt << endl;
	return 0;
}
