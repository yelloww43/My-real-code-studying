// ETOJ P1014.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include<vector>

int main()
{
    long long n, m;
    cin >> n >> m;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    long long cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if ((a[i] + a[j] + a[k]) * (a[i]^a[j]^a[k]) >= m) {
                    cnt++;
                }
                
            }
        }
    }
    cout << cnt << endl;
    return 0;
}


