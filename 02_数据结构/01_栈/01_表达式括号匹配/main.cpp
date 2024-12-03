#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

char a[10001];
int i = 0, tot = 0;

int main() {
	scanf("%s", &a);
	while (a[i] != '@')
	{
		if (a[i] == '(')
		{
			tot++;
		}
		if (a[i] == ')') {
			if (tot >= 0)
			{
				tot--;
			}
			else
			{
				break;
			}
		}
		i++;
	}
	if (tot != 0)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}
	return 0;
}