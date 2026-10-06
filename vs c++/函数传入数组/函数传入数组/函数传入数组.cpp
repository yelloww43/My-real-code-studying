// 函数传入数组.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
void func(int arr[], int length)     //传入的数组变成了一个指针，在函数内部是无法用sizeof得到数组的长度的，所以必须在外面把数组的大小传入
{                                    //函数内对数组用sizeof只能得到8字节
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << endl;
    }
}
void up(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        int min_index = i;
        for (int j = i+1; j < length; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;       //减少交换次数
            }
            
        }
        int t = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = t;
    }
}



int main()
{
    int arr[] = { 6,9,5,4,3,9,7 };
    /*func(arr, sizeof(arr) / sizeof(arr[0]));*/
    up(arr, sizeof(arr) / sizeof(arr[0]));
    func(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}

