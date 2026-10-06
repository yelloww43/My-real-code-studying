#include<iostream>
//#include<cstdlib>
//#include<string>//用c++风格的字符串所需头文件 但是目前版本不加也可以编译运行

using namespace std;
int main(){
    //c风格字符串
    char str[]="hello world";
    cout<< str <<endl;
    //C++风格字符串
    string str2="hello world";
    cout<< str2 <<endl;



    system("pause");
    return 0;
}