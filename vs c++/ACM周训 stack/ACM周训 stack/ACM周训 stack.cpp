// ACM周训 stack.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<stack>
using namespace std;
//栈，后进先出，无迭代器，仅能从栈顶添加或移除元素。


int main()
{
    stack<int> stc;  //创建空栈

    stc.push(1);  //添加元素至栈顶,O(1)  
    stc.top();    //返回栈顶元素,O(1)
    stc.pop();    //删除栈顶元素,O(1)
    stc.size();   //返回栈长度, O(1)
    stc.empty();  //判断栈是否为空,等价于stc.size()==0,O(1)

    return 0;
}


