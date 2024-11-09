#include<iostream>
using namespace std;
int main()
{
	cout << "请输入x的值以进行函数运算（0<x<10）" << endl;
	float num,result;
	cin >> num;
	if (0 < num && num<1)
	{
		result = 3 - 2 * num;
		cout << "计算结果为：" << result << endl;
	}
	else if (1 <= num && num < 5)
	{
		result = 2 / (4 * num) + 1;
		cout << "计算结果为：" << result << endl;
	}
	else if(5 <= num && num< 10)
	{
		result = num * num;
		cout << "计算结果为：" << result << endl;
	}
	else
	{
		cout << "您输入的x值有误" << endl;
	}
}