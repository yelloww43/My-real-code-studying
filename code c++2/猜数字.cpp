#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
srand(time(0));
int target=rand()%100+1;
int guess;
while(guess!=target){
    cout<<"猜一个数字(1-100)"<<endl;
    cin>>guess;
    if(target>guess){
        cout<<"小了"<<endl;
    }else if(target<guess){
        cout<<"大了"<<endl;

    }else{
        cout<<"猜对了"<<endl;
    }
}
system("pause");
return 0;
}