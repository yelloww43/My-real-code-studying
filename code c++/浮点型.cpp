#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    //float a=0.99f; //float数据类型数字后的f表示强制类型转换 不然默认double类型
    //默认情况下 输出一个小数 会显示出6位有效数字
    // double a=0.99666444;
    // cout <<a<<endl;
    // cout<<sizeof(float)<<endl;
    // cout<<sizeof(double)<<endl;
    //科学计数法
    //3e2 表示3乘10的2次方
    //3e-2 表示3乘10的-2次方
    
    //字符型
    char ch='a';
    char ch2='A';  //单引号里只能有一个字符 不能用双引号表示一个字符
    //不是把字符放到内存里 而是对应的ascll编码放入内存
    cout<<ch<<endl;
    cout<<sizeof(ch)<<endl;
    cout<<(int)ch<<endl;  //强制类型转换 输出ascll码
    cout<<(int)ch2<<endl;// a-->97 A-->65

    system("pause");
    return 0;
}