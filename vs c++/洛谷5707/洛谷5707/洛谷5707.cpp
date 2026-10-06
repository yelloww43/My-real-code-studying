// 洛谷5707.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<cmath>        //里面包含向上取整函数
using namespace std;

int main()
{
    int s, v;
    cin >> s;
    cin >> v;
    double t = ceil(1.0*s / v);  //ceil是向上取整函数
    //cout << t << endl;
    int arrive_time = 8 * 60;
    int begin = arrive_time - t - 10;
    if (begin<0)
    {
        begin = 24*60+begin;

    }
    //cout << begin << endl;
    int begin_hour = begin / 60;
    int begin_min = begin % 60;
    printf("%02d:%02d\n", begin_hour, begin_min);   //强制两位自动补0
    return 0;
}

