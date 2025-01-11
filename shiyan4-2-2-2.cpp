#include<iostream>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString)
{
	int x = strlen(hexString);
	int result = 0;
	for (int i = 0; i < strlen(hexString); i++)
	{
		int t = 0;
		if (hexString[i] >= 65 && hexString[i] <= 69)
		{
			t = hexString[i] - 65 + 10;
		}
		else if (hexString[i] >= 97 && hexString[i] <= 102)
		{
			t = hexString[i] - 97 + 10;
		}
		else if (hexString[i] >= 48 && hexString[i] <= 57)
		{
			t = (hexString[i] - 48);         //ASCII码转换
		}
		else
		{
			cout << "输入了错误的16进制字符" << endl;
			t = 0;
			break;
		}
		result += (pow(16, x - i - 1) * t);
	}
	return result;
}
int main()
{
	char hexstring[999];
	cout << "请输入一个16进制的数:" << endl;
	cin >> hexstring;
	cout << "转化结果是：" << parseHex(hexstring) << endl;
	return 0;
}