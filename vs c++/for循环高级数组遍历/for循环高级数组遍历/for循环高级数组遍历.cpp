// for循环高级数组遍历.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

//高级写法
//for(元素类型 临时变量名：数组变量）
//{
//   临时变量存的就是一个个元素
//}
#include <iostream>
using namespace std;

int main()
{
	int a[] = { 1,2,3,6 };
	for (int t:a)
	{
		cout << t << endl;
	}
	return 0;
}


