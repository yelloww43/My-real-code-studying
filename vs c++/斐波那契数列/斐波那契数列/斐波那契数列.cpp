// 斐波那契数列.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 
//斐波那契数列是一个每一项都是前两项和的数列，以1开始，例如
//1.1.2.3, 5, 8, 13, ..
//给定一个整数n，输出麦波那契数列的第n项


#include <iostream>
#include<vector>
using namespace std;


int main()
{
	int n;
	cin >> n;
	vector<long long> v(n);
	v.push_back(1), v.push_back(1);
	for (int i = 3; i <= n; ++ i) {
		v.push_back(*(v.rbegin()) + *(++v.rbegin()));                        //每次循环把前两个数之和加在数组后
	}                                                                        //使用反向迭代器找到倒数两个数
	cout << v.back() << endl;
 
	return 0;
}

