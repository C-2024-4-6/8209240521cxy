#include<iostream>
using namespace std;
void merge(int list1[], int size1,int list2[], int size2, int list3[])
{
	cout << "请分别输入的两个数组的元素数和每个元素：" << endl;
	cin >> size1;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cin >> size2;
	for (int t = 0 ; t < size2; t++)
	{
		cin >> list2[t];
	}
	for (int x = 0,y = 0,z = 0; x < size1 + size2; x++,z++)
	{
		if (y < size1)
		{
			list3[x] = list1[y];
			y++;
		}
		else if(z >= size1 && z < size1 + size2)
		{
			list3[x] = list2[z - y];
		}
	}
}
int main()
{
	int list1[5] = {}, list2[5] = {}, list3[10] = {};
	merge(list1, 5, list2, 5, list3);
	cout << "合并后的数组为：";
	for (int p = 0; p < 10; p++)
	{
		cout << list3[p] << " ";
	}
}
