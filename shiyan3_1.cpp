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
	cout << "�������������Լ���ǣ�" << d << endl;
	int e = (a * b) / d;
	cout << "������������С�������ǣ�" << e;
	return d, e;
}
int main()
{
	int m,n;
	cout << "������a,b���������Լ������С��������" << endl;
	cin >> m >> n;
	math(m, n);
}