#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int a[n], f[n + 1] = {};
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        f[a[i]]++;
    }
    int ans;
    for (int i = 1; i < n + 1; i++)
    {
        if (f[i] == 0)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}