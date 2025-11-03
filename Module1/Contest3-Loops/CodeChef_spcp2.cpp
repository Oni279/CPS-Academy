#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        int m = (n - (x * 100)) / 100;
        if (n < x * 100)
        {
            cout << "0" << endl;
        }

        else
        {
            if ((n - (x * 100)) % 100 == 0)
                cout << m << endl;
            else
                cout << m + 1 << endl;
        }
    }

    return 0;
}