#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int m = n / (k + 1);
        int s = n - (m * k);
        cout << s << endl;
    }

    return 0;
}