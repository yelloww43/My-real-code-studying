// 数组元素的移除.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
	int* p = new int[5] {1, 3, 5, 7, 9};
	int* newp = new int[4];
	for (int i = 0; i < 5; i++) {
		if (i == 2)
		{
			continue;  //跳过第三个元素
		}
		if (i > 2)
		{
			newp[i - 1] = p[i];
		}
		else
		{
			newp[i] = p[i];
		}

	}
	//可选 回收老数组空间
	delete[] p;

	p = newp;   //将老数组的指针指向新数组的内存空间 可选

	for (int i = 0; i < 4; i++)
	{
		cout << p[i] << endl;
	}
	return 0;
}

