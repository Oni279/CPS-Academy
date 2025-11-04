#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s[8];
    for (int i = 8; i <= 1; i--)
    {
        for (int j = 1; j <= 8; j++)
        {
            cin >> s[j];
        }
    }
    for (int i = 8; i <= 1; i--)
    {
        for (int j = 0; j < 8; j++)
        {
            if (s[i][j] = '*')
            {
                cout << (char)j+63 << i << endl;
                break;
            }
        }
    }

    return 0;
}