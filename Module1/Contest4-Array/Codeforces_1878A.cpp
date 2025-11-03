#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == k)
                ans = 1;
        }
        if (ans == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}