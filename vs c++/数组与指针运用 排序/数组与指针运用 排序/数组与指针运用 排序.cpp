// 数组与指针运用 排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
    int* p = new int[10] {5, 2, 3, 6, 44, 52, 41, 36, 55, 40};
    int min = 0;   //记录最小值
    int min_index=0;   //记录最小值所在下标
    for (int i = 0; i < 9; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (j == i)
            {  //在第一个元素的时候
                min = p[j];  //将第一个元素记录到min中
                min_index = j;  //将下标记录
            }
            //开始比较
            if (p[j] < min)
            {
                min = p[j];
                min_index = j;
            }
        }
        //进行互换 需要中间变量
        int t = p[i];
        p[i] = p[min_index];
        p[min_index] = t;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << ",";
    }
    return 0;
}

