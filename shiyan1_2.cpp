#include<iostream>
using namespace std;
int main()
{
	float PI = 3.14159265;
	float r, h,V;
	cout << "请分别输入圆锥的半径和高：" << endl;
	cin >> r >> h;
	V = PI*r*r*h*(static_cast<float>(1)/3);
	cout << "该圆锥的体积为：" << V<<endl;
}