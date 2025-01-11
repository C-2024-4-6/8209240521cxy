#include<iostream>
#include"mytemperature.h"
using namespace std;
int main()
{
	double a,b;
	cout << "请输入摄氏度以转化成华氏度：" << endl;
	cin >> a;
	cout << "华氏度为：" << celsius_to_fah(a) << "度" << endl;
	cout << "请输入华氏度以转化成摄氏度：" << endl;
	cin >> b;
	cout << "摄氏度为：" << fahrenheit_to_cels(b) << "度" << endl;
}    