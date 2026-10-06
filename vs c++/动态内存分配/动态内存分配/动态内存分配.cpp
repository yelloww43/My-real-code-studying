// 动态内存分配.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//new 用于申请并分配内存空间 并提供指向该空间的指针（内存地址）
//基本语法：
//new type  申请普通变量空间
//new type[n} 申请数组空间
//delete用于释放内存 仅用于new申请的内存区域
//基本语法：
//delete 指针 
//delete[] 指针





#include <iostream>
using namespace std;

int main()
{
    /*int* p = new int;  4字节
    *p = 10;
    cout << *p << endl;*/
    int* p = new int[5];   //20字节
    p[0] = 1;     //指针也可用下标，等同于*（p+0）
    *p = 1;
    p[1] = 2;     //指针也可用下标，等同于*（p+1）
    *(p + 1) = 2;
    cout << p[0] << endl;
    cout << *(p + 1) << endl;
    delete[] p;

}

