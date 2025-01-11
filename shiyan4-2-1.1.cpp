#include<iostream>
using namespace std;
void main()
{
	int i = 5, j = 7, * pi, * pj;
	pi = &i;
	pj = &j;
	cout << i << '\t' << j << '\t' << pi << '\t' << pj << endl;
	cout << &i << '\t' << *&i <<'\t'<< & j << '\t' << *&j;
}