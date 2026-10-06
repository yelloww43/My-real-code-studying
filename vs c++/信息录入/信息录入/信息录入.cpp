// 信息录入.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    struct Student
    {
        string name;
        int age;
        string housing;
    };
    for (int i = 1; i <= 5; i++)
    {
        struct Student stu;
        cout << "正在录入学生" << i << "的信息：" << endl;
        cout << "请输入姓名：";
        cin >> stu.name;
        cout << endl << endl;
        cout << "请输入年龄：";
        cin >> stu.age;
        cout << endl << endl;
        cout << "请输入地址：";
        cin >> stu.housing;
        cout << endl << endl;

        cout << "学生" << i << "信息录入完成。" << endl << endl << endl;
        cout << "学生"<<i<<"信息核对：姓名；"<<stu.name<<"，年龄："<<stu.age<<"，地址："<<stu.housing<<"。" << endl;
    }


    return 0;
}


