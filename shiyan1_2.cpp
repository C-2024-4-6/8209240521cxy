#include<iostream>
using namespace std;
int main()
{
	float PI = 3.14159265;
	float r, h,V;
	cout << "��ֱ�����Բ׶�İ뾶�͸ߣ�" << endl;
	cin >> r >> h;
	V = PI*r*r*h*(static_cast<float>(1)/3);
	cout << "��Բ׶�����Ϊ��" << V<<endl;
}