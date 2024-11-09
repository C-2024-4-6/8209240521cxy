#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float x1, x2,a;
	cout << "请输入要求平方根的数a的值" << endl;
	cin >> x1;
	a = x1;
	x2 = (x1 + a / x1) / 2;
	if (x1 < 0)
	{
		cout << "计算平方根的数值a不能为负" << endl;
	}
	else
	{
		for (; x1 - x2 > 1e-10 || x2 - x1 > 1e-10;)
		{
			x1 = x2;
			x2 = (x1 + a / x1) / 2;
		}
		cout << "a的平方根为：" << fixed<<setprecision(10)<<x2 << endl;
	}
}