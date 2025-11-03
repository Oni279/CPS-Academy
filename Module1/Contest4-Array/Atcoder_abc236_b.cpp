#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[4*n-1],f[n+1] = {};
    for (int i = 0; i < 4*n-1; i++)
    {
        cin >> a[i];
        f[a[i]]++;
    }
    int ans;
    for (int i = 1; i <=n; i++)
    {
        if(f[i] == 3)
        {
        ans = i;
        break;
        }
    }
    cout << ans <<endl;
    

    return 0;
}