#include<iostream>
#include"mytemperature.h"
using namespace std;
int main()
{
	double a,b;
	cout << "���������϶���ת���ɻ��϶ȣ�" << endl;
	cin >> a;
	cout << "���϶�Ϊ��" << celsius_to_fah(a) << "��" << endl;
	cout << "�����뻪�϶���ת�������϶ȣ�" << endl;
	cin >> b;
	cout << "���϶�Ϊ��" << fahrenheit_to_cels(b) << "��" << endl;
}    