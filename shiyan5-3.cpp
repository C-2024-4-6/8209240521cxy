#include<iostream>
using namespace std;
class Cuboid
{
public:
	float length;
	float width;
	float height;
	float volume;
public:
	void input()
	{
		cin >> length;
		cin >> width;
		cin >> height;
	}
	float calculate()
	{
		volume = length * width * height;
		return volume;
	}
	void show()
	{
		cout << "The volume of the cuboid is:" << volume << endl;
	}
};
int main()
{
	Cuboid cub1;
	Cuboid cub2;
	Cuboid cub3;
	cub1.input();
	cub1.calculate();
	cub1.show();
	cub2.input();
	cub2.calculate();
	cub2.show();
	cub3.input();
	cub3.calculate();
	cub3.show();
	return 0;
}