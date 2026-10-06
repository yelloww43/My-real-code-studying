#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b=20;
    int c=0;
    c=a>b?a:b;//三目运算符 把较大的值赋给c 可以做赋值运算 也可以做表达式
    cout<<c<<endl;//三目运算符中返回的是变量 可以做赋值


    system("pause");
    return 0;
}