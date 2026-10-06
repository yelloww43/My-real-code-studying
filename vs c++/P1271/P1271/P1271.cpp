// P1271.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <bits/stdc++.h>  //vs用不了 竞赛和洛谷刷题可以用
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m, 0);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    /*for (int i = 0; i < m;i++) {
        cout << a[i] << " ";
    }*/
    for (auto &t : a) {         //因为此处a数组为vector 所以数据类型不是int 得用auto自动类型判断 不然得写好长一段数据类型声明
        cout << t << " \n"[&t == &a.back()];  //中括号内是bool类型判断 若为true输出回车 若为false输出空格
    }
    return 0;
}


