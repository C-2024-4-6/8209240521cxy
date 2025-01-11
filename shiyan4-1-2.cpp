#include<iostream>
using namespace std;
static double bub(double list[10])
{
	int listSize = 10;
	double cen;
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
			if (list[j] > list[j + 1])
			{
				cen = list[j];
				list[j] = list[j + 1];
				list[j + 1] = cen;
				changed = true;
			}
	} while (changed);
	return list[10];
}
int main()
{
	double list[10] = {};
	cout << "请依次输入数组的各个数值：" << endl;
	for (int i = 0; i <= 9; i++)
	{
		cin >> list[i];
	}
	bub(list);
	for (int x = 0; x <= 9; x++ )
	{
		cout << list[x];
	}
}