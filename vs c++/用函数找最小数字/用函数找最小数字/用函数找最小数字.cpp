// 用函数找最小数字.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int get_min(int a,int b,int c)
{
    int min = a;
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }
    return min;
}

int main()
{
    cout << get_min(88, 6, 10) << endl;
}

