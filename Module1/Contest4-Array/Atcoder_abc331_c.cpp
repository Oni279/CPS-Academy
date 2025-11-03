#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int a[n];
    int i =0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int d[n];
    for (int j = 0; j < n; j++)
    {
        d[j] = a[i];
    }
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] < d[j])
                s = s + d[j];
        }
        cout << s;
        if (i == n - 1)
            cout << endl;
        else
            cout << " ";
    }

    return 0;
}