#include<iostream>
using namespace std;
static bool is_prime(int num)
{
	if (num <= 1)
	{

		return false;
	}
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int count = 0;
	for (int a = 1; count <= 199; a++)
	{
		if (is_prime(a) == 1)
		{
			cout << a<<"\t";
			count += 1;
			if (count % 10 == 0)
			{
				cout << endl;
			}
		}
	}
}