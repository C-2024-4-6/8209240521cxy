#include<iostream>
using namespace std;
int main()
{
    char c;
    int num,letters = 0, spaces = 0, digits = 0, others = 0;
    cout << "请输入你要输入的字符长度（空格也计算在内）：" << endl;
    cin >> num;
    cout << "请输入一行字符：" << endl;
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

    cout << "英文字母个数: " << letters << endl;
    cout << "空格个数: " << spaces << endl;
    cout << "数字字符个数: " << digits << endl;
    cout << "其它字符个数: " << others << endl;
    return 0;
}