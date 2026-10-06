// vector.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////
//lower_bound（v.begin（），v.end（），x） - v.begin（）；表示在数组v的开头到结尾里找到数值为x的那个元素的下标
//
//去重：unique（v.begin（），v.end（））；
//使用前提是已经从小到大排序好的数组 它返回的是去重后的第一个重复（无效）
//如v = { 1，2，2，3，3，5 }
//使用unique后就变成v = { 1，2，3，5，2，3 } 同时返回2
//这个时候就要搭配v.erase（it_st，it_ed） 删除末尾两个重复的元素

#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
void output(vector<int> v) {
    for (auto& t : v)cout << t << " ";
    cout << endl;
}

int main()
{
    vector<int> v;
    v = { 1,5,3,6,8,8,2,2,2 };
    output(v);
    sort(v.begin(), v.end());
    output(v);
    cout<<lower_bound(v.begin(), v.end(), 1)-v.begin()<<endl;    //可以找到下标 但是有重复就会出错
    //auto it_st = unique(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());      // 记得erase前面要加v.
    output(v);
    return 0;
}
