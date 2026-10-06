// 函数基础语法.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int get_max(int a,int b)   //括号里为形式参数  int表示有int类型的返回值
{                                //void 表示没有返回值的函数
    int max = a > b ? a : b;
    /*if (max < b)
    {
        max = b;
    }*/
    return max;
}
void say_hello(string name)
{
    cout << "你好世界" << endl;
}

int main()
{
    int a = 20, b = 82;     //扔进去的是实际参数
    cout<< get_max(a, b) << endl;
    say_hello("人类");
    return 0;
}

