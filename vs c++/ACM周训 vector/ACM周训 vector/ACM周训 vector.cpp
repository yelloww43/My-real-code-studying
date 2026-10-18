// ACM周训 vector.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;//e建-/z的vector
    vector<int>b(5); //创建一个长为5的vector
    vector<int>c(5,1);//创建一个长为5，每个元素为1的vector
    vector<int>d(c);//创建一个与c内容一样的vector，和vector<int>d=c效果一样
    a.push_back(1);  //向a末尾插入元素1,改变vector长度,时间复杂度为0(1)
    a.size();//返回a的长度，时间复杂度0（1）
    a[5];//返回a中第六个元素，时间复杂度0（1)
    a.pop_back();//删除a不尾元素，改变vector长度，时l间复杀度o（1)
    a.clear();//清空a，时/间复杂度o（n）

    //迭代器
    a.begin();//返回a首元素的选代器，时间复杂度0（1）
    a.end();//返回a尾元素后一个位置的选代器，时间复杂度0（1）
    a.erase(a.begin() + 2);//删除a第三个元素，时/间复杂度0（n）
    a.insert(a.begin() + 2, 1);//在第三个元素前插入元素1，时/间复杂度0(n)

}


