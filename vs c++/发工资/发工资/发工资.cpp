// 发工资.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<random>
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
	int account = 10000;
	for (int i = 0; i < 20; i++)
	{
		int score = get_random_num(1, 10);
		if (score < 5)
		{
			cout << "员工" << i + 1 << "，绩效分" << score << "，低于5，不发工资，下一位。" << endl;
		}
		else
		{
			account -= 1000;
			cout << "向员工" << i + 1 << "发放工资1000元，账户余额还剩余" << account << "元" << endl;
		}
		if (account == 0) {
			cout << "工资发完了，下次再来" << endl;
			break;
		}
	}
	return 0;
}

