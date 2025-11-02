#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin >> x;
    int count = 0;
    while (x / 2 != 0)
    {
        int mod = x % 2;
        x = x / 2;
        if (mod == 0)
        {
            count++;
        }
        if (mod == 1)
            break;
    }
    cout << count << endl;

    return 0;
}