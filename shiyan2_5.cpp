#include<iostream>
using namespace std;
int main()
{
    char c;
    int num,letters = 0, spaces = 0, digits = 0, others = 0;
    cout << "��������Ҫ������ַ����ȣ��ո�Ҳ�������ڣ���" << endl;
    cin >> num;
    cout << "������һ���ַ���" << endl;
    cin.ignore();
    for (int i = 1; i <= num; i++)
    {
        cin.get(c);
        if (isalpha(c))
        {
            letters++;
        }
        else if (isspace(c))
        {
            spaces++;
        }
        else if (isdigit(c))
        {
            digits++;
        }
        else
        {
            others++;
        }
    }

    cout << "Ӣ����ĸ����: " << letters << endl;
    cout << "�ո����: " << spaces << endl;
    cout << "�����ַ�����: " << digits << endl;
    cout << "�����ַ�����: " << others << endl;
    return 0;
}