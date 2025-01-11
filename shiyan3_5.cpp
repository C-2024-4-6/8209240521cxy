#include<iostream>
using namespace std;
int monkey_peach(int num,int a)
{
	int b = 1;
	while (b <= num)
	{
		a = (a + 1) * 2;
		b++;
	}
	return a;
}
int main()
{
	cout << "猴子第一天共摘了" << monkey_peach(9, 1) << "个桃子" << endl;
}