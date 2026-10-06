// 常量指针.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
    //指向const的指针 
    //表示指向区域的数据，是不变的，但可以更换指向
    //语法（将const写在*前面）： const 数据类型 * 指针；
    //       数据类型 const * 指针；
    //int num1 = 10, num2 = 100;
    //const int* p = &num1;
    ////*p = 20;  //不行 p指针指向的区域的值不可修改
    //p = &num2; //可以修改指向


    //const指针
    //表示指针本身不可更改，但指向的数据可以更改
    //语法：将const写在*之后
    //数据类型 * const 指针 = 地址；   //必须初始化地址，因为指针不可修改了

    //int num1 = 10, num2 = 100;
    //int* const p = &num1;
    //p = &num2;  //指针指向不可改变
    //*p = 20;    //指向区域内的值可以更改

    //指向const的const指针
    //指针和指向区域的值，都不可更改。
    //语法：*的前后都写const
    //const 类型 * const 指针 = 地址；   //必须初始化地址，因为指针不可修改了

    int num1 = 10, num2 = 100;
    const int* const p = &num1;
    //p = &num2;
    //*p = 20;   都不可修改
}

