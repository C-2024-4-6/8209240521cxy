#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û" << endl;
	cin >> a;
	if (a >= 97 && a <= 122) {
		a -= 32, cout << a << endl;
	}
	else {
		int c = (int)a;
		cout << c << endl;
	}
}