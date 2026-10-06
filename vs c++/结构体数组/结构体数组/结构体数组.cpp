// 结构体数组.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    struct Student      
    {
        string name;
        int age;
        string gender;
    };
    struct Student arr[3];  //声明了一个结构体数组
    // 后续可以给它的每一个元素赋值 按每个结构体成员
    //也可以声明和赋值同时进行
    struct Student arr2[3] = { {"周杰伦",11,"男"},{"杰伦",18,"男"} ,{"周伦",12,"男"} };
    for (int i = 0; i < 3; i++)
    {
        cout << arr2[i].name << endl;
    }

    return 0;
}


