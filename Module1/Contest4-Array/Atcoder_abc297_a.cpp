#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int a[n], result = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if ((a[i + 1] - a[i]) <= d)
        {
            ans = a[i + 1];
            break;
        }
    }
    cout << ans << endl;

    return 0;
}