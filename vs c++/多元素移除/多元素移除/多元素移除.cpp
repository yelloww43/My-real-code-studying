// 多元素移除.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int* p = new int[10] {3, 4, 1, 11, 99, 66, 22, 2, 8, 6};
    int* newp = new int[8];
    int offset = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i == 0 || i == 5)
        {
            offset++;    //每跳过一个元素 后面的元素前移的距离加一
            continue;
        }
        /*if (i > 0 && i < 5)
        {
            newp[i - 1] = p[i];
        }
        else if (i > 5)
        {
            newp[i - 2] = p[i];
        }*/   //这样稍微有些多 可以创建一个变量
        newp[i - offset] = p[i];    //这样不用两个条件判断 而且如果要用来移除其他位置的元素 修改起来也比较简单
    }
    delete[] p;
    for (int i = 0; i < 8; i++)
    {
        cout << newp[i] << endl;
    }
    
    return 0;
}


