// vector排序去重.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
    int n;  //数组大小
    
    
    cin >> n;
    vector<int> v(n, 0);
    for (int j = 0; j < n; j++)cin >> v[j];
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int& t : v)cout << t << " ";
    cout << endl;
    
    
    

    return 0;
}

