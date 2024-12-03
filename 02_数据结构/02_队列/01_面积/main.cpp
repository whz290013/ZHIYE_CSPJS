#include<bits/stdc++.h>

using namespace std;

int dx[4] = { -1,0,1,0 }, dy[4] = { 0,1,0,-1 };
int kz[100][100], num = 1, m = 10, ans;
bool p[100][100] = { false };

void sum(int l, int q) {
	int x, y, t, w, i;
	int h[1000][3];
	p[l][q] = true;
	t = 0; w = 1; h[1][1] = l; h[1][2] = q;
	do {
		t++;
		for (i = 0; i <= 3; i++) {
			x = h[t][1] + dx[i];
			y = h[t][2] + dy[i];
			if (x >= 0 && x <= m + 1 && y >= 0 && y <= m + 1 && p[x][y] == false && kz[x][y] == 0) {
				w++;
				h[w][1] = x;
				h[w][2] = y;
				p[x][y] = true;
				num++;
			}
		}
	} while (t<w);
}

int main() {

	int i, j;
	for (i = 1; i <= m; i++) {
		for (j = 1; j <= m; j++) {
			cin >> kz[i][j];
			if (kz[i][j] == 1) {
				num++;
			}
		}
	}
	for (int i = 0; i <= m + 1; i++) {
		kz[i][0] = 0;
		kz[i][11] = 0;
	}
	for (int i = 0; i <= m + 1; i++) {
		kz[0][i] = 0;
		kz[11][i] = 0;
	}
	sum(0, 0);
	ans = 144 - num;
	cout << ans << endl;
	return 0;
}
