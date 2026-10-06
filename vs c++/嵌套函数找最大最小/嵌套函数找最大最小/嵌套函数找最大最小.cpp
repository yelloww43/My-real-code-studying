// 嵌套函数找最大最小.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int get_min(int a, int b)
{
    int min = a;
    if (b < min)
    {
        min = b;
    }
    return min;
}
int get_max(int a, int b)
{
    int max = a;
    if (b > max)
    {
        max = b;
    }
    return max;
}
struct minmax
{
    int min;
    int max;
};
struct minmax result(int a, int b)
{
    int min=get_min(a, b);
    int max=get_max(a, b);
    struct minmax res = { min,max };
    return res;
}


int main()
{
    
    cout << result(5,10).min << endl;
}


