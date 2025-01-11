#include<iostream>
using namespace std;
int indexOf(char s1[], char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for (int t = 0, int i = 0; t < len1; t++)
	{
		if (s1[t] != s2[i])
		{
			i++;
		}
		if (t == len1)
		{
			return i;
		}

		if (i = len2 - len1)
		{
			return -1;
		}
	}
}
int main()
{
	char s1[999], s2[999];
	cout << "ÇëÊäÈëµÚÒ»´®×Ö·û£º" << endl;
	cin.getline(s1,999);
	cout << "ÇëÊäÈëµÚ¶þ´®×Ö·û£º" << endl;
	cin.getline(s2, 999);
	int a = indexOf(s1, s2);
	cout << "indexOf(" << s1 << "," << s2 <<") "<<"is:" << a << endl;
}