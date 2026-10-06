// 结构体成员默认值.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;


int main()
{
    struct Student
    {
        string name;
        string major_code = "003032";  //设置默认值 若后续未对该成员赋值 则默认为这个值
        int dormitory_num = 1;
    };
    struct Student s1 = { "周杰伦" };
    struct Student s2 = { "林俊杰","003001",3 };
    cout << s1.name << endl;
    cout << s1.major_code << endl;
    cout << s1.dormitory_num << endl;
    cout << s2.name << endl;
    cout << s2.major_code << endl;
    cout << s2.dormitory_num << endl;
    return 0;
}

