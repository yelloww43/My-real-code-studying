// ACM周训 queue.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<queue>
using namespace std;

//队列，先进先出，无迭代器，仅能从队尾添加元素，从队首移除元素。

int main()
{
    queue<int> q;//创建空队列

    q.push(1); //添加元素至队尾,时间复杂度为O(1)
    q.front(); //返回队首元素,O(1)
    q.pop();   //删除队首元素,O(1)
    q.size();  //返回队列长度,O(1)
    q.empty(); //返回队列是否为空,等价于q.size()==0,O(1)

    return 0;
}

