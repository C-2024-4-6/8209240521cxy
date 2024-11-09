#include<iostream>
using namespace std;
int main()
{
	double num1, num2,result;
	cout << "请输入要进行计算的式子" << endl;
	char m;
	cin >> num1 >>m>> num2;
	switch (m)
	{
	case'+': result = num1 + num2;
		cout << "计算结果为：" << result << endl;
		break;
	case'-': result = num1 - num2;
		cout << "计算结果为：" << result << endl;
		break;
	case'*': result = num1 * num2;
		cout << "计算结果为：" << result << endl;
		break;
	case'/': result = num1 / num2;
		cout << "计算结果为：" << result << endl;
		if (num2 == 0) cout << "除数不能为0！" << endl;
		break;
	case'%':result = (int)num1 % (int)num2;
		cout << "计算结果为：" << result << endl;
		break;
	default: cout << "输入运算符非法！" << endl;
		break;
	}
}