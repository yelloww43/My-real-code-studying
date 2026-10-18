// 回文质数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
#include<iomanip>
#include<string>
using namespace std;





int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0)continue;
        int x = i, s = 0;
        while (x != 0) {
            s = s * 10 + x % 10;
            x /= 10;
        }
        if (i != s)continue;
        bool Is_prime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0)Is_prime = false;
        }
        if (Is_prime)cout << i << endl;
    }
    return 0;


}