#include<iostream>
using namespace std;
int main()
{
	float a, b, c,Circumference;
	cout << "��ֱ����������ε������ߣ�" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		Circumference = a + b + c;
	    cout<<"���������ܳ�Ϊ��"<<Circumference<<endl;
		if (a == b || a == c || b == c)
		{
			cout << "�Ҹ��������ǵ���������" << endl;
		}
		else
		{
			cout << "�������β��ǵ���������" << endl;
		}
	}
	else
	{
		cout << "�������޷�����������" << endl;
	}

}