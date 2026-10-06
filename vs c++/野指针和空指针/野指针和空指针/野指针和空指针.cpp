
// 野指针和空指针.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>

int main()
{
    int* y;//声明了一个指针变量 占8个字节 但未作初始话 是野指针 指向未知的地址 有风险，所以最好养成初始化的习惯
    int* p = NULL;    //这两个都是指针的初始话 让指针指向0 变成空指针 比较安全
    int* x = nullptr;
}

