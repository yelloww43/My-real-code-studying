#include <iostream>
#include<cstdlib>
#include<vector>
using namespace std;
//输入一个长度为5的数组 用vector储存，然后找出最大最小值并输出


int main()
{
    vector<int> a(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int max = a[0];
    int min = a[0];
    for (int i = 1; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    cout << "最大值: " << max << endl;
    cout << "最小值: " << min << endl;
    return 0;
}