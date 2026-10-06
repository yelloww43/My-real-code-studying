// 10 次机会猜数字.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "iostream"
#include"random"
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
	int random_num = get_random_num(1,10);
	int num[10] = { 0, };
	for (int i = 0; i < 10; i++)
	{
		cout << "请输入数字：";
		cin >> num[i];
	}
	int result=0;
	for (int i = 0; i < 10; i++)
	{
		if (num[i] == random_num) 
		{
			result++;
		}
		//cout << num[i] << endl;
	}
	cout << "猜对了" << result << "次" << endl;
	return 0;
}

