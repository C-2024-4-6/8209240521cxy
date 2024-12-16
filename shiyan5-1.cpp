#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	Time(int hour, int minute, int sec)
	{
		this->hour = hour;
		this->minute = minute;
		this->sec = sec;
	}
	int Show()
	{
		cout << "hour:" << hour << "minute:" << minute << "sec:" << sec << endl;
		return 0;
	}
};
int main()
{
	Time t1(4,5,6);
	t1.Show();
	return 0;
}