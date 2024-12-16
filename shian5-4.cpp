#include<iostream>
using namespace std;
class Student
{
public:
	int id;;
	int score;
public:
	Student(int id, int score)
	{
		this->id = id;
		this->score = score;
	}
};
static int max(Student* stu1,Student* stu2,Student* stu3,Student* stu4,Student* stu5)
{
	int temp = 0,i = 0;
	int a[5] = { stu1->score,stu2->score,stu3->score,stu4->score,stu5->score };
	int b[5] = { stu1->id,stu2->id,stu3->id,stu4->id,stu5->id };
	for (; i < 5; i++)
	{
		if (a[i] > temp)
		{
			temp = a[i];
		}
	}
	cout << "The highest mark's id is:" << b[i-1] << endl;
	return 0;
}
int main()
{
	Student stu[5] = { Student(1,92),Student(2,94),Student(3,95),Student(4,94),Student(5,99) };
	max(&stu[0],&stu[1],&stu[2],&stu[3],&stu[4]);
}