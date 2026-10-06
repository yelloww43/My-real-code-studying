//数据类型存在意义 给变量分配合适的内存空间
//整型
//short 2字节
//int 4字节
//long （windows）4字节
//long long 8字节

//sizeof 用于统计数据类型所占用的内存大小

#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int a=10;
    cout << sizeof(short) << endl; 
    system("pause");
    return 0;


}
//short<int<=long<long long