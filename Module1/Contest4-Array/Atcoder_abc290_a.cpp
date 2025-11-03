#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        
    }
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum = sum + a[b[i]];
    }
    cout << sum << endl;

    return 0;
}