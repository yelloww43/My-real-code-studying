// 引用.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
//引用语法，主要使用&表明引用：
// int a=10;
// int& b=a;    必须初始化，而且后面不可修改且不为空，引用是变量的别名
// a和b变成完全等价的了，对a操作会改变b，对b操作会改变a

// double d1=11.11;
// double& d2=d1;


//场景运用：函数形参的声明（引用传参）和返回值使用
void switch_num(int& a, int& b)
{
    int t = a;
    a = b;
    b = t;
}
int main()
{
    int x = 10, y = 6;
    switch_num(x, y);
    cout << x << " " << y << endl;
}

