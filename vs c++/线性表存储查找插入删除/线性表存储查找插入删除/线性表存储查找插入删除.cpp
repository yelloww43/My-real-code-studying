// 线性表存储查找插入删除.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include<vector>
struct LNode {
    int data[100] = { 0 };
    int Last=-1;
};
//遍历线性表
void checkarr(LNode* ptr, int length) {
    for (int i = 0; i < length; i++) {
        cout << ptr->data[i] << " ";
    }
    cout << endl;
}
//按下标查找线性表
void Findnum(int i,LNode* ptr,int length){
    if (i<1 || i>length)cout << "查找不合法" << endl;
    else cout << ptr->data[i - 1] << endl;
}

void check(int n, LNode* ptr,int length) {
    for (int i = 0; i < length; i++) {
        if (ptr->data[i] == n) {
            cout << "找到了,在第" << i + 1 << "位" << endl;
            break;
        }
        else if (i == length-1) {
            cout << "不存在你要找的数" << endl;
        }
    }
}
//插入函数
void insert(int i,int n, LNode* ptr,int &length) {
    length++;
    for (int j = ptr->Last; j >= i - 1; j--) {
        ptr->data[j + 1] = ptr->data[j];
    }
    ptr->data[i - 1] = n;
    ptr->Last = length-1;
}

//删除函数
void Delete(int i, LNode* ptr, int& length) {
    for (int j = i; j <= ptr->Last; j++) {
        ptr->data[j - 1] = ptr->data[j];
    }
    ptr->data[ptr->Last] = 0;
    length--;
    ptr->Last = length - 1;
}

int main()
{
    struct LNode L;
    LNode* ptr = &L;
    int length = 0;
    for (int i = 0; i < 10; i++) {
        L.data[i] = i + 1;
        length++;
        //cin >> L.data[i];
    }    //初始化线性表
    cout << length << endl;
    ptr->Last = length - 1;
    //查找第6位元素
    Findnum(6, ptr,length);
    //查找不合法的
    Findnum(11, ptr,length);
    Findnum(0, ptr,length);
    //查找元素
    check(4, ptr,length);
    //插入元素 在第5位插入元素11
    insert(5,11, ptr, length);
    cout << length << endl;
    checkarr(ptr, length); //检查插入是否成功
    // 
    //删除元素  删第8位
    Delete(8, ptr, length);
    checkarr(ptr, length);
    //

    
    return 0;
}


