// 信息录入升级版.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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
	struct Student *p=new Student[5];
	for (int i = 1; i < 6; i++)
	{
		
		cout << "正在录入学生" << i << "的信息" << endl;
		cout << "请输入姓名：";
		cin >> p[i - 1].name;
		cout << endl << endl << "请输入年龄：";
		cin >> p[i - 1].age;
		cout << endl << endl << "请输入地址：";
		cin >> p[i - 1].house;
		cout << endl << endl << "学生" << i << "信息录入完成" << endl << endl;
		cout << "学生" << i << "信息核对，姓名：" << p[i - 1].name << "，年龄：" << p[i - 1].age << "，地址：" << p[i - 1].house << "。" << endl;
	}
	delete[] p;
	return 0;
   
}


