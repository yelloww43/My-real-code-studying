// 实验课.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int d1 = n / 100;
    int d3 = n % 10;
    int d2 = n - (d1 * 100 + d3);
    int end = d3 * 100 + d2 + d1;
    cout << end;

    return 0;
}

