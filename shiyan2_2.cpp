#include<iostream>
using namespace std;
int main()
{
	cout << "������x��ֵ�Խ��к������㣨0<x<10��" << endl;
	float num,result;
	cin >> num;
	if (0 < num && num<1)
	{
		result = 3 - 2 * num;
		cout << "������Ϊ��" << result << endl;
	}
	else if (1 <= num && num < 5)
	{
		result = 2 / (4 * num) + 1;
		cout << "������Ϊ��" << result << endl;
	}
	else if(5 <= num && num< 10)
	{
		result = num * num;
		cout << "������Ϊ��" << result << endl;
	}
	else
	{
		cout << "�������xֵ����" << endl;
	}
}