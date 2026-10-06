// P1009.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n-i; j > 0; j--)
        {
            a[i] *= j;
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;
    delete[] a;
    return 0;
}


