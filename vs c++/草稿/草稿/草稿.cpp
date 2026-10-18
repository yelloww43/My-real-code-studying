// 草稿.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;
struct stu {
    string name;
    int ch;
    int ma;
    int en;
};
    



int main()
{
    int n;
    cin >> n;
    struct stu s[1001];
    int sum[1001];
    for (int i = 0; i < n; ++i) {
        cin >> s[i].name >> s[i].ch >> s[i].ma >> s[i].en;
        sum[i] = s[i].ch + s[i].en + s[i].ma;
    }
    int max = sum[0];
    int max_index = 0;
    
    for (int j = 0; j < n; ++ j) {
        if (sum[j] > max) {
            max = sum[j];
            max_index = j;
        }
    }
    
    cout << s[max_index].name << " " << s[max_index].ch << " " << s[max_index].ma << " " << s[max_index].en << " ";
    return 0;
    

}
