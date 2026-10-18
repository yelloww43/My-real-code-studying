// 栈.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

typedef struct SNode* Stack;
struct SNode {
    int Data[100];
    int Top;            //栈顶的数据的下标
};

//入栈
void Push(Stack PtrS,int item){
    if (PtrS->Top == 99) {
        cout << "栈满了" << endl;
        return;
    }
    else {
        PtrS->Data[++(PtrS->Top)] = item;        //先让Top加一 再让item存储为下标为新的Top的数据
        return;
    }
}

//出栈
int Pop(Stack PtrS) {
    if (PtrS->Top == -1) {
        cout << "堆栈空" << endl;
        return -1;                 //错误值
    }
    else {
        return(PtrS->Data[(PtrS->Top)--]);       //先返回下标为Top的数据 再让Top-1
    }
}

int main()
{
    
}


