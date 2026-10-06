
// 手写单向链表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
	Node(int val) :data(val), next(nullptr) {}
};

int main()
{
	Node* head = nullptr;
	Node* n1 = new Node(10);
	n1->next = head;
	head = n1;
	Node* n2 = new Node(20);
	n2->next = head;
	head = n2;
	Node* n3 = new Node(30);
	n3->next = head;
	head = n3;
	//创建一个临时指针用于遍历链表
	Node* temp = head;
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	return 0;
}


