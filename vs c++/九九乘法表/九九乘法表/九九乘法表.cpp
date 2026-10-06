// 九九乘法表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    i = 1;
    while ( i < 10) {
        for (j = 1; j < i+1; j++) {
            cout << j << "*" << i << "=" << j * i << "\t";
            
        }
        i++;
        cout << endl;
    }
    return 0;
}


