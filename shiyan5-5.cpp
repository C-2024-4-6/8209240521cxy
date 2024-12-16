#include<iostream>
using namespace std;
class Point
{
private:
	int x = 60, y = 80;
public:
	Point(int x = 60,int y = 80)
	{
		this->x = x;
		this->y = y;
	}
	void set_Point(int i, int j)
	{
		x = x+i, y =y +j;
	}
	void display()
	{
		cout << "修改后的坐标为：" << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point p;
	p.set_Point(10, 20);
	p.display();
}