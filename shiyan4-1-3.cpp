#include<iostream>
using namespace std;
int main()
{
	bool a[100];
	for (int i = 0; i <= 99; i++)
	{
		a[i] = false;
	}
	for (int t = 1; t <= 100; t++)
	{
		if (t == 1)
		{
			for (int k = 0; k <= 99; k++)
			{
				a[k] = true;
			}
		}
		else
		{
			for (int s = t-1; s <= 100; s = s + t)
			{
				if (a[s])
				{
					a[s] = false;
				}
				else
				{
					a[s] = true;
				}
			}
		}
	}
	for (int g = 0; g <= 99; g++)
	{
		if (a[g])
		{
			cout << g + 1 << "\t";
		}
	}
}
