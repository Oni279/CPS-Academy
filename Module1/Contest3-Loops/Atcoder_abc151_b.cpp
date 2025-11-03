#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, m;
    cin >> n >> k >> m;
    int a[n];
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    int remain = (n * m) - sum;
    if ((n * m) < sum)
        cout << "0" << endl;
    else if (remain <= k)
        cout << remain << endl;
    else
        cout << "-1" << endl;

    return 0;
}