#include<iostream>
using namespace std;
int main()
{
	double num1, num2,result;
	cout << "������Ҫ���м����ʽ��" << endl;
	char m;
	cin >> num1 >>m>> num2;
	switch (m)
	{
	case'+': result = num1 + num2;
		cout << "������Ϊ��" << result << endl;
		break;
	case'-': result = num1 - num2;
		cout << "������Ϊ��" << result << endl;
		break;
	case'*': result = num1 * num2;
		cout << "������Ϊ��" << result << endl;
		break;
	case'/': result = num1 / num2;
		cout << "������Ϊ��" << result << endl;
		if (num2 == 0) cout << "��������Ϊ0��" << endl;
		break;
	case'%':result = (int)num1 % (int)num2;
		cout << "������Ϊ��" << result << endl;
		break;
	default: cout << "����������Ƿ���" << endl;
		break;
	}
}