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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        a[0]++;
        long long prod = 1;
        for (int i = 0; i < n; i++)
        {
            prod = prod * a[i];
        }
        cout << prod << endl;
    }

    return 0;
}