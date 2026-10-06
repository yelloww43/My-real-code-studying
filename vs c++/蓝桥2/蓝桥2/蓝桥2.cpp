#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int* sum = new int[n - 2] {0};
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i; j < k+i; j++)
        {
            sum[i] += a[j];
        }
    }
    int max_sum = sum[0];
    for (int i = 0; i < n - 2; i++)
    {
        if (sum[i] > max_sum)
        {
            max_sum = sum[i];
        }

    }
    cout << max_sum << endl;
    delete[] a, sum;


    return 0;
}
