# include <iostream>
using namespace std;
void swap(int* a, int m)
{
	int t;
	for (int i = 0; i < m - 1; i++)
		for (int j = i + 1; j < m; j++)
			if (a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
}
int main()
{
	int m, n;
	int* a;
	cout << "����������Ԫ�ظ���" << endl;
	cin >> m;
	a = new int[m];
	cout << "����������Ԫ��" << endl;
	for (int i = 0; i < m; i++)
		cin >> a[i];
	swap(a, m);
	cout << "����������Ԫ��Ϊ��";
	for (int i = 0; i < m; i++)
		cout << *(a + i) << "\t";
	delete[]a;

	return 0;
}