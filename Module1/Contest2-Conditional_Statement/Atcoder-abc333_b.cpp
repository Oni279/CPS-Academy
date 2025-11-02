#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a, b, c, d;
    cin >> a >> b >> c >> d;
    if (abs(b - a) == abs(d - c))
    {
        cout << "Yes\n";
    }
    else if (abs(b - a) > 2 || abs(d - c) > 2)
    {
        if (5 - abs(b - a) == abs(d - c))
        {
            cout << "Yes\n";
        }
        else if (5 - abs(d - c) == abs(b - a))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}