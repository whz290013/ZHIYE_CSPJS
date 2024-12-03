#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int a[2000], b[2000], c[2000];
char al[2000], bl[2000];

int main() {
	int la, lb, lc, x = 0;
	
	// visual studio 2022 使用 gets_s 代替 gets
	// 读入字符串 al,bl
	gets_s(al);
	gets_s(bl);


	// la,lb 分别存字符串 al,bl 长度
	la = strlen(al);
	lb = strlen(bl);

	// 将两个字符串分别存到整形一维数组中
	for (int i = 0; i <= la - 1; ++i) {
		a[la - i] = al[i] - 48;
	}

	for (int i = 0; i <= lb - 1; ++i) {
		b[lb - i] = bl[i] - 48;
	}
	
	// 从第一位加起
	lc = 1;
	// 判断两个大整数是否都还没有算完
	while (lc <= la || lc <= lb) {
		// x表示前一次的进位
		c[lc] = a[lc] + b[lc] + x;
		// 判断是否进一
		x = c[lc] / 10;
		// 求相加的数的个位
		c[lc] %= 10;
		// 计算下一位数
		lc++;
	}

	c[lc] = x;
	while (c[lc]==0&&lc>1)
	{
		// 去掉多余的0
		lc--;
	}
	
	for (int i = lc; i >= 1; --i)
	{
		cout << c[i];
	}
	cout << endl;

	return 0;
}