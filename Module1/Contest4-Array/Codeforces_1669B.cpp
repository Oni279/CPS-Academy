#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n], f[n + 1] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            f[a[i]]++;
        }
        int ans = -1;
        for (int i = 1; i < n + 1; i++)
        {

            if (f[i] >= 3)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;

        
    }
    return 0;
}