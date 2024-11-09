#include<iostream>
using namespace std;
int main()
{
	float simple_price = 0.8, num = 2,sum = 1.6,average,day = 0;
	label:while (num < 100)
	{
		day = day + 1;
		num = num * 2;
		if (sum > 100)
		{
			goto label;
		}
		sum = sum + num * simple_price;
	}
	average = sum / day;
	cout << "平均每天花" << average << "元" << endl;
}