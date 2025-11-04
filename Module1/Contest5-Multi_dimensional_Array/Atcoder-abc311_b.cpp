#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int ans = 0, cur = 0;
    for (int j = 0; j < d; j++)
    {
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i][j] != 'o')
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cur++;
        }
        else
        {
            cur = 0;
        }
        ans = max(ans, cur);
    }
    cout << ans << endl;

    return 0;
}