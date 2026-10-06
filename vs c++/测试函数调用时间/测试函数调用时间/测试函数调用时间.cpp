// 测试函数调用时间.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//测试两个不同的多项式函数程序

#include <iostream>
using namespace std;
clock_t start, stop;
//clock_t是clock()函数返回的变量类型
double duration;
//记录被测函数的运用时间,以秒为单位
#define maxn 10
#define maxk 1e7

double f1(int n, double a[], double x) {
    double p = a[0];
    for (int i = 1; i <= n; i++) {
        p += (a[i] * pow(x, i));
    }
    return p;
}
double f2(int n, double a[], double x) {
    double p = a[n];
    for (int i = n; i > 0; i--) {
        p = a[i - 1] + x * p;
    }
    return p;
}
void check_time(int num) {
    double a[maxn];
    for (int i = 0; i < maxn; i++)a[i] = (double)i;

    start = clock();  //开始计时
    for (int i = 0; i < maxk; i++) {
        if (num == 1)f1(9, a, 1.1);    //被测函数  一次跑太快了 测不出来时间 那就重复跑几次
        else f2(9, a, 1.1);
    }
    stop = clock();   //结束计时
    duration = ((double)(stop - start)) / CLK_TCK / maxk;
    cout << duration << endl;
}


int main()
{
    check_time(1);
    check_time(2);
    return 0;
}


