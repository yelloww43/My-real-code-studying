// 输出沙漏型的星号.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
#include<iomanip>
#include<string>
using namespace std;







int main()
{
    int n;
    string c;
    cin >> n >> c;
    int sum = 1;
    int i = 3;
    int cnt = 1;
    while (sum <= n) {
        sum += i * 2;
        i += 2;
        cnt++;
    }
    if (sum > n) {
        i -= 2;
        sum -= i * 2;
        cnt -= 1;
    }
    int left = n - sum;
    int t = cnt * 2 - 1;
    int t2 = 1;
    for (int i = 0; i < cnt * 2 - 1; ++i) {
        //cout << "\t";
        if (t != 1) {
            for (int k = 0; k < (cnt * 2 - 1 - t) / 2; ++k) {
                cout << " ";
            }
            for (int j = 1; j <= t; ++j) {
                cout << c;
            }
            cout << endl;
            t -= 2;
        }
        else {

            for (int k = 0; k < (cnt * 2 - 1 - t2) / 2; ++k) {
                cout << " ";
            }
            for (int j = 1; j <= t2; ++j) {
                cout << c;
            }
            cout << endl;
            t2 += 2;

        }


    }
    cout << left << endl;

    return 0;


}