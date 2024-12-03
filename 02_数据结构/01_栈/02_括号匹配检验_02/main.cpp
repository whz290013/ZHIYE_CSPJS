#include<iostream>
#include<string>
#include<stack>

using namespace std;

int n;
string s;
bool check(string s){
	stack<char> p;
	p.push('#');
	for (int i = 0; i < s.size(); i++) {
		char c = s[i];
		if (c == ')') {
			if (p.top() != '(') {
				return false;
			}
			else { 
				p.pop();
			}
		}
		else if (c == ']') {
			if (p.top() != '[')
			{
				return false;
			}
			else {
				p.pop();
			}
		}
		else {
			p.push(c);
		}
	}
	return (p.size() == 1);
}
int main() {
	cin >> s;
	if (check(s)) {
		cout << "OK" << endl;
	}
	else {
		cout << "Wrong" << endl;
	}
	return 0;
}