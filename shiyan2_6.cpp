#include<iostream>
using namespace std;
int main()
{
	int a, b,r;
	cout << "�����������������������Լ������С��������" << endl;
	cin >> a >> b;
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
}