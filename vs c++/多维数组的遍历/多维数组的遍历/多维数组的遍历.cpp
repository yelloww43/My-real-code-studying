// 多维数组的遍历.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
	int s[2][3] = {{1,2,3},{4,5,6}};
	for (int i = 0; i < sizeof(s) / sizeof(s[0]); i++)
	{
		for (int j = 0; j < sizeof(s[j]) / sizeof(s[j][0]); j++)
		{
			cout << s[i][j] << endl;
		}
	}
	return 0;
}

