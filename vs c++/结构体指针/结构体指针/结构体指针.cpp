// 结构体指针.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
    struct Student
    {
        string name;
        int age;
        string house;
    };
    struct Student stu = { "周杰伦",15,"深圳" };
    struct Student* p1 = &stu;   //引入已存在的结构体地址
    struct Student* p2 = new Student{ "周杰伦",15,"深圳" };  //通过new操作符申请指针空间，可以用delete清除
    //使用指针变量访问结构体成员需要更换操作符号为：->  一个箭头
    cout << p1->name << endl;
    cout << p1->house << endl;
    cout << p1->age << endl;
    delete p2;
    return 0;
}


