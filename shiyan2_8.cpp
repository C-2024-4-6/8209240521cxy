#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float x1, x2,a;
	cout << "������Ҫ��ƽ��������a��ֵ" << endl;
	cin >> x1;
	a = x1;
	x2 = (x1 + a / x1) / 2;
	if (x1 < 0)
	{
		cout << "����ƽ��������ֵa����Ϊ��" << endl;
	}
	else
	{
		for (; x1 - x2 > 1e-10 || x2 - x1 > 1e-10;)
		{
			x1 = x2;
			x2 = (x1 + a / x1) / 2;
		}
		cout << "a��ƽ����Ϊ��" << fixed<<setprecision(10)<<x2 << endl;
	}
}