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
	cout << "���ӵ�һ�칲ժ��" << monkey_peach(9, 1) << "������" << endl;
}