#include<iostream>
using namespace std;
int main()
{
	float a, b, c,Circumference;
	cout << "请分别输入三角形的三条边：" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		Circumference = a + b + c;
	    cout<<"该三角形周长为："<<Circumference<<endl;
		if (a == b || a == c || b == c)
		{
			cout << "且该三角形是等腰三角形" << endl;
		}
		else
		{
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else
	{
		cout << "此三边无法构成三角形" << endl;
	}

}