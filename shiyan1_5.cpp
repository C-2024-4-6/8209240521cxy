#include<iostream>
using namespace std;
int main()
{
	float temp;
	cout << "�����뻪���¶ȣ�" << endl;
	cin >> temp;
	temp = (temp - 32) / 1.8;
	cout << "��������¶������϶ȱ�ʾΪ��" << temp << "��" << endl;
}