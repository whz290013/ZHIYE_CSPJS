#include<iostream>
using namespace std;
void bubble(int[], int);
int main()
{
	//大数组应开为全队
	int array[10] = 111, 4, 55, 6, 77, 8, 9, 0, 7, 11;
	cout << "排序前";
	for (int i = 0; i < 10; ++i) {
		cout << array[i] << ',';
		cout << endl;
	}
	bubble(array, 10);
	cout << "排序后";
	for (int i = 0; i < 10; ++i) {

		cout << array[i] << ','; cout << endl;
	}

	return 0;

	void bubble(int a[], int n)
	{
		for (int i = 1; i < n; ++i) {
			for (int j = 0; j < n - i; ++j) {
				//判断并交换变量
				if (a[j] > a[j + 1])
			}
			int temp = a[j]; a[j] = a[j + 1]; a[j + 1] = temp;
		}
	}
}