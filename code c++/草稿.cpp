//设圆半径r，圆柱高h求圆周长C1、圆面积Sa、圆球表面积Sb、圆球体积Va、圆柱体积Vb。用scanf输入数据，输出计算结果，输出时要求文字说明，取小数点后两位数字。请编程序。PI＝3.14
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int r,h;
    cin>>r>>h;
    double C1,Sa,Sb,Va,Vb;
    C1=2*3.14*r;
    Sa=3.14*r*r;
    Sb=4*3.14*r*r;
    Va=(4.0/3.0)*3.14*r*r*r;
    Vb=3.14*r*r*h;

    cout<<fixed<<setprecision(2);
    cout<<"圆周长C1: "<<C1<<endl;
    cout<<"圆面积Sa: "<<Sa<<endl;
    cout<<"圆球表面积Sb: "<<Sb<<endl;
    cout<<"圆球体积Va: "<<Va<<endl;
    cout<<"圆柱体积Vb: "<<Vb<<endl;

    return 0;
}