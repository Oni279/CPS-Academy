#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s[8];

    for (int j = 0; j < 8; j++)
    {
        cin >> s[j];
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (s[i][j] == '*')
            {
                cout << (char)(j + 'a') << 8-i << endl;
                break;
            }
        }
    }

    return 0;
}