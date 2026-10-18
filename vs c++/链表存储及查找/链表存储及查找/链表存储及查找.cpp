// 链表存储及查找.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

typedef struct LNode* List;
struct LNode {
    int Data;     //这里的类型可以变  看你要储存什么样的数据
    List Next;
};
struct LNode L;
List PtrL;
//求表长
int length(List Ptrl) {
    List p = Ptrl;      //设一个临时指针
    int j = 0;
    while (p) {
        p = p->Next;
        j++;              //遍历链表的方式求表长
    }
    return j;
}

//查找
//按序号查找
List FindKth(int K, List Ptrl) {
    List p = Ptrl;  //临时指针
    int i = 1;
    while (p != NULL && i < K) {
        p = p->Next;
        i++;
    }
    if (i == K)return p;       //找到第K个,返回指针
    else return NULL;          //否则返回空
}
//按值查找
List Find(int X, List Ptrl) {
    List p = Ptrl;
    while (p != NULL && p->Data != X) {
        p = p->Next;
    }
    return p;
}

//插入(在第i-1(1≤i≤n+1)个结点后插入一个值为X的新结点)
/*(1)先构造一个新结点, 用s指向;
(2)再找到链表的第i - 1个结点, 用p指向;
(3)然后修改指针, 插入结点(p之后插入新结点是s)*/
List Insert(int X, int i, List Ptrl) {
    List p, s;
    if (i == 1) {             //如果插在头部前
        s = new struct LNode;
        s->Data = X;             //创建新节点并赋值
        s->Next = Ptrl;          //让新节点的指针指向原头部节点
        return s;            //在头部位置插入  实现形式为 Ptrl=Insert(X,1,Ptrl);  让s成为新的头部指针
    }
    p = FindKth(i - 1, Ptrl);
    if (p == NULL) {
        cout << "参数i错误" << endl;
        return NULL;
    }
    else {
        s = new struct LNode;
        s->Data = X;                 //创建新节点并赋值
        s->Next = p->Next;           //让新节点的指针指向插入位置后一个节点
        p->Next = s;                 //让插入位置前的节点的指针指向新节点
        return Ptrl;
    }
}
//4.删除(删除链表的第i(1≤i≤n)个位置上的结点)
//
//(1)先找到链表的第i - 1个结点, 用p指向;
//(2)再用指针s指向要被删除的结点(p的下一个结点);
//(3)然后修改指针, 删除s所指结点;
//(4)最后释放s所指结点的空间。
List Delete(int i, List Ptrl) {
    List p, s;
    if (i == 1) {         //如果删第一个节点
        s = Ptrl;         //s指向第一个节点
        if (Ptrl != NULL)Ptrl = Ptrl->Next;     //开始删除
        else return NULL;
        delete s;       //释放被删除节点
        return Ptrl;
    }
    p = FindKth(i - 1, Ptrl);
    if (p == NULL) {
        cout << "你要删的节点不存在" << endl;
    }
    else if(p->Next==NULL){
        cout << "你要删的节点不存在" << endl;
    }
    else {
        s = p->Next;                      //s指向要删除的节点
        p->Next = s->Next;                //i-1节点本来指向要删除的节点的指针现在指向i+1节点
        delete s;                         //释放被删除节点
        return Ptrl;
    }
}

int main()
{
    
}


