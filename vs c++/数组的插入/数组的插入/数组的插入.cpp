// 数组的插入.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;


int main()
{
    int* p = new int[5] {5, 7, 6, 2, 4};   //把9，20插入下标为1和3的位置
    int* newp = new int[7];
    int offset=0;
    for (int i = 0; i < 7; i++)
    {
        if (i == 1)
        {
            newp[i] = 9;
            offset++;
            continue;
        }
        else if (i == 3)
        {
            newp[i] = 20;
            offset++;
            continue;
        }
        newp[i] = p[i - offset];
    }
    delete[] p;
    p = newp;   //让老数组指针指向新数组

    for (int i = 0; i < 7; i++)
    {
        cout << newp[i] << ",";
    }
    
        
    return 0;
}


