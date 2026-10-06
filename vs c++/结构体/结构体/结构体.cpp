// 结构体.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
//结构体（struct），是一种用户自定义复合数据类型，可以包含不同类型的不同成员。
//基本语法
//声明结构体
//struct 结构体类型
//{
//    成员1类型 成员1名称；
//    ...
//    成员N类型 成员N名称；
//}；

//struct Student
//{
//    string name;
//    int age;
//    string gender;
//};
int main()
{
    struct Student      //一种新的数据类型 自己创建的
    {
        string name;
        int age;
        string gender;
    };

    //结构体变量的声明，可以在前面带上struct关键字（可以省略不写）
    // 建议写上，可以清晰的知道变量是自定义结构体类型的
    struct Student stu;
    stu = { "人类",11,"沃尔玛购物袋" };
    //结构体变量是一个整体的包装，无法直接cout输出
    //需要访问它的每一个成员进行输出，访问语法：结构体变量.成员名称
    cout << stu.name << endl;
    cout << stu.gender << endl;
    cout << stu.age << endl;
    return 0;
}


