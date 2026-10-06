
// 找到数组最大和最小值.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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
	int num[10];
	for (int i = 0; i < 10; i++) 
	{
		num[i] = get_random_num(1, 100);
		cout << num[i] << endl;
	}
	int max, min;
	max = min = num[0];
	for (int i = 1; i < 10; i++)
	{
		if (num[i] < min)
		{
			min = num[i];
		}
		else if(num[i]>max)
		{
			max = num[i];
		}
	}
	cout << "最大数字为" << max << endl << "最小数字为" << min << endl;
}


