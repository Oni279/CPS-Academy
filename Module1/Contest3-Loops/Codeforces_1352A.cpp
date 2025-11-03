#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0, a[count], pow = 1;
        while (n > 0)
        {
            if (n % 10 > 0)
            {
                a[count] = (n % 10) * pow;
                count++;
            }
            n = n / 10;
            pow = pow * 10;
        }
        cout << count << endl;
        for (int i = count - 1; i >= 0; i--)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}