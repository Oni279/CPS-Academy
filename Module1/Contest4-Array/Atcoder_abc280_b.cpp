#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long s[n], a[n];
    s[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = s[i + 1] - s[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
        if (i == n - 1)
            cout << endl;
        else
            cout << " ";
    }

    return 0;
}