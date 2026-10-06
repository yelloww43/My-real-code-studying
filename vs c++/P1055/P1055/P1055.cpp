// P1055.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
    int *a=new int[10];
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        char ch;
        cin >> ch;
        if (ch == '-')
        {
            i--;
            continue;
        }
        a[i] = ch - '0';
        if (ch == 'X')a[9] = 10;
        if(i<9)sum += a[i] * (i + 1);
    }
    int check = sum % 11;
    if (check == a[9]) {
        cout << "Right" << endl;
    }
    else if (a[9] == 10)
    {
        cout << a[0] << "-" << a[1] << a[2] << a[3] << "-" << a[4] << a[5] << a[6] << a[7] << a[8] << "-" << 'X' << endl;
    }
    else
    {
        cout << a[0] << "-" << a[1] << a[2] << a[3] << "-" << a[4] << a[5] << a[6] << a[7] << a[8] << "-" << check << endl;
    }
    delete[] a;
    return 0;
}

