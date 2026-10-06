// 分配各班级座位.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<random>
#include<string>
using namespace std;
using namespace std;
int get_random_num(int min, int max) {
	//创建一个随机数生成器
	random_device rd;
	mt19937 gen(rd());
	//
	uniform_int_distribution<> dis(min, max);
	//
	int random_number = dis(gen);
	return random_number;
}

int main()
{
	string names[] = { "Landon", "Avery", "Kamden", "Bentley", "Finnegan", "Nash", "Emmett", "Greyson", "Noah", "Jace",
    "Jaxton", "Sawyer", "Zachary", "Eli", "Keegan", "Lincoln", "Isaac", "Asher", "Declan", "Theo",
    "Levi", "Dominic", "Austin", "Wyatt", "Carter", "Logan", "Luke", "Max", "Ethan", "Miles",
    "Oliver", "Hudson", "Owen", "William", "Joshua", "Benjamin", "Henry", "Lucas", "Alexander", "Jackson",
    "Mason", "Grayson", "Ryder", "Elijah", "Liam", "Caleb", "Thomas", "Cooper", "Hunter", "Connor" };
	string v[2][2][5];

	for (int j = 0; j < sizeof(v) / sizeof(v[0]); j++)
	{
		for (int k = 0; k < sizeof(v[0]) / sizeof(v[0][0]); k++)
		{
			for (int i = 0; i < sizeof(v[0][0]) / sizeof(v[0][0][0]); i++)
			{
				string major = j == 0 ?  "物理":"计算机";
				string class_name = k == 0 ? "一班" : "二班";
				int seat_num = i + 1;
				string name = names[get_random_num(0, sizeof(names)/sizeof(names[0])-1)];
				string msg = major + "专业，" + class_name + "，座号为" + to_string(seat_num) + "的同学叫" + name;
				//to_string()函数的作用是把int类型转换为string类型，+用于拼接字符串
				v[j][k][i] = msg;
				
			}
		}
	}
	cout << "信息准备完成，现在开始输出。" << endl;
	for (int j = 0; j < sizeof(v) / sizeof(v[0]); j++)
	{
		for (int k = 0; k < sizeof(v[0]) / sizeof(v[0][0]); k++)
		{
			for (int i = 0; i < sizeof(v[0][0]) / sizeof(v[0][0][0]); i++)
			{
				cout << v[j][k][i] << endl;
			}
		}
	}
	return 0;
}


