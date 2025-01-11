#include<iostream>
using namespace std;
int math(int a, int b)
{
	int r;
	int c = a, d = b;
	while (c % d != 0)
	{
		r = c % d;
		c = d;
		d = r;
	}
	cout << "这两个数的最大公约数是：" << d << endl;
	int e = (a * b) / d;
	cout << "这两个数的最小公倍数是：" << e;
	return d, e;
}
int main()
{
	int m,n;
	cout << "请输入a,b以求其最大公约数和最小公倍数：" << endl;
	cin >> m >> n;
	math(m, n);
}