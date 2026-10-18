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
    for (auto& t : v)cout << t << " ";         //使用迭代器遍历数组,auto表示自动识别后面的类型为迭代器,不然就得写一大串类型名
    cout << endl;                               //一定要记得加&  表示引用 对t做修改会影响v数组
}

int main()
{
    vector<int> v;
    v = { 1,5,3,6,8,8,2,2,2 };
    //初始化数组格式为 vector<int> v(10,0);  表示创建一个大小为10,元素初始化均为0的数组
    // 也可以先创建一个空数组 vector<int> v;  然后用 v.resize(n); 来定义大小
    
    //访问的时候可以直接下标访问,但是正常不会检查下标是否合法
    //于是可以用v.at() 自动判断
    int y = v.at(4);

    //查找数组大小
    int length = v.size();

    v.push_back(20); //表示在数组末尾插入一个元素20;
    v.pop_back();      //删除末尾元素
    int x = v.back();       //取出最后一项

    //判断数组是否为空
    //if(v.size())...
    //if(v.empty())...
    
    //清空vector
    //v.clear();

    //反向迭代器  *(v.rebigin()) 星号表示取出最后一项的值     *(++ v.rebegin())表示取出倒数第二项的值

    output(v);
    sort(v.begin(), v.end());
    output(v);
    cout << lower_bound(v.begin(), v.end(), 1) - v.begin() << endl;    //可以找到下标 但是有重复就会出错
    //auto it_st = unique(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());      // 记得erase前面要加v.
    output(v);
    return 0;
}
