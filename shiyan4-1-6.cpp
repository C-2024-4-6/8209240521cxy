#include<iostream>
using namespace std;
const int num1 = 26;
const int num2 = 99;
void count(const char s[], int counts[])
{
	for (int i = 0; i < num1; i++)
	{
		counts[i] = 0;
	}
	for (int t = 0; t < num2; t++)
	{
		counts[s[t] - 'a']++;
		counts[s[t] - 'A']++;
	}
}
int main()
{
	char s[num1];
	int counts[num2];
	cout << "ÇëÊäÈëÒ»¶ÎÓ¢ÎÄ£º" << endl;
	cin.getline(s, num2);
	count(s, counts);
	for (int p = 0; p < num1; p++)
	{
		if (s[p] != 0)
		{
			cout << static_cast<char>(p + 'a') << ":" <<"" << counts[p] << "times" << endl;
		}
	}
}