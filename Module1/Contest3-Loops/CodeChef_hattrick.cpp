#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool ans = 0;
        string x[6];
        for (int i = 0; i < 6; i++)
        {
            cin >> x[i];
        }
        for (int i = 0; i < 6; i++)
        {
            if (x[i] == "W" && x[i + 1] == "W" && x[i + 2] == "W")
                ans = 1;
        }
        if (ans == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}