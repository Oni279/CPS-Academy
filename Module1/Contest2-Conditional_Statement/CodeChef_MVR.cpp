#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int m = 2 * a + b;
    int r = 2 * x + y;
    if (m > r)
    {
        cout << "Messi" << endl;
    }
    else if (r > m)
    {
        cout << "Ronaldo" << endl;
    }
    else
    {
        cout << "Equal" << endl;
    }

    return 0;
}