#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3], b[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 3);
        for (int i = 0; i < 3; i++)
        {
            cin >> b[i];
        }
        sort(b, b + 3);
        int c = a[2] * 100 + a[1] * 10 + a[0];
        int d = b[2] * 100 + b[1] * 10 + b[0];
        if (c > d)
            cout << "Alice" << endl;
        else if (d > c)
            cout << "Bob" << endl;
        else
            cout << "Tie" << endl;
    }

    return 0;
}