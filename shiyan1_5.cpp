#include<iostream>
using namespace std;
int main()
{
	float temp;
	cout << "请输入华氏温度：" << endl;
	cin >> temp;
	temp = (temp - 32) / 1.8;
	cout << "您输入的温度用摄氏度表示为：" << temp << "度" << endl;
}