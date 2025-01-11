#include<iostream>
using namespace std;
int main()
{
	int a[10] = {};
	int t = 0,num = 10;
	cout << "请依次输入十个数字：" << endl;
	for (int x = 0; x < num; x++)
	{
		cin >> a[x];
	}
	cout << a[0];
	my_label2:
	for (int i = 1; i <= 9; i++)
	{
		my_label:
		for (int t = 0; t < i; t++)
		{
			if (a[i] != a[t])
			{
				if (t == i - 1)
				{
					cout << a[i];
				}
				else
				{
					continue;
				}
			}
			break;
		}
		t = 0;
	}
}