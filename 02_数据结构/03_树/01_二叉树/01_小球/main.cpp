#include<iostream>

using namespace std;

int n, k, p;

bool tree[1 << 20];

void cyx() {
	int i; p = 1;
	for (i = 2; i <= n; i++) {
		if (tree[p]) { // 往右子树走
			tree[p] = 0;
			p = p * 2 + 1;
		}
		else { // 往左子树走
			tree[p] = 1;
			p *= 2;
		}
	}
}

int main() {
	int i;
	cin >> n >> k;
	for (i = 1; i <= k; i++) {
		cyx();
	}
	cout << p;
	return 0;
}