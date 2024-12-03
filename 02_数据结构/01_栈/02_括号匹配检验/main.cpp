#include<iostream>
#include<cstdio>
using namespace std;

const int N = 1e5 + 10;
char a[N];
int t;
string s;
int main() {
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ')') {
			if (a[t] != '(') {
				cout << "Wrong" << endl;
				return 0;
			}
			else { 
				t--; 
			}
		}
		else if (s[i] == ']') {
			if (a[t] != '[') {
				cout << "Wrong" << endl;
				return 0;
			}
			else {
				t--;
			}
		}
		else {
			a[++t] = s[i];
		}
	}
	if (t == 0) {
		cout << "OK" << endl;
	}
	else {
		cout << "Wrong" << endl;
	}
	return 0;
}