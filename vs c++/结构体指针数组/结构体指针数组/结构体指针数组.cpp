// 结构体指针数组.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;


int main()
{
    struct Student
    {
        string name;
        int age=11;
        string gender = { "男" };
    };
    //可以引入已存在结构体数组地址 但通常不会用 正常要去申请

    //通过new操作符申请指针数组空间
    struct Student* p = new Student[3]{ {"周杰伦"},{"林俊杰"},{"刘德华",45,"男"} };
    cout << p[0].name << endl;
    cout << p[1].age << endl;   //依旧用点号 p[1] 是已经取出来了的结构体 用点号来取出结构体成员
    cout << p[2].name << endl;
    delete[] p;
    return 0;
}


