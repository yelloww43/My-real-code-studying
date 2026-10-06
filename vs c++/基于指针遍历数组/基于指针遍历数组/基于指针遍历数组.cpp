// 基于指针遍历数组.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
	int v1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	char v2[] = {'a', 'b', 'c', 'd', 'e'};
	int* p1 = v1;
	char* p2 = v2;
	for (int i = 0; i < sizeof(v1) / sizeof(v1[0]); i++)
	{
		cout << *(p1 + i) << endl;
	}
	for (int i = 0; i < sizeof(v2) / sizeof(v2[0]); i++)
	{
		cout << *(p2 + i) << endl;
	}

	//for循环遍历数组, 使用指针取出每一个元素并打印输出。
	return 0;
}

