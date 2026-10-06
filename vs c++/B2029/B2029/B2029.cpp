// B2029.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
    int h, r;
    double pi = 3.14;
    cin >> h >> r;
    int sum = 20 * 1000;
    double V = pi * r * r * h;
    int num = sum / V+1;
    cout << num << endl;
    return 0;
}


