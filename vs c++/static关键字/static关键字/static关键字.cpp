// static关键字.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int* add(int a, int b)
{
    static int sum;  //原本的sum的生命周期仅在函数里，出了函数那块内存就被自动清理了，无法将指针带出函数
    sum = a + b;    //但是加上static后 指针的生命周期就能维持到main程序运行结束了 
    return &sum;    //也可以用动态内存管理 申请一块内存空间 只不过最后要清理内存
}
int* max(int arr[], int length)
{
    static int max = arr[0];
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    return &max;
}

int main()
{
    int x = 10, y = 3;
    int *sum=add(x, y);
    //cout << *sum << endl;
    int arr[6] = { 6,55,22,49,34,43 };
    int *result=max(arr, sizeof(arr) / sizeof(arr[0]));
    cout << *result << endl;

    return 0;
}




