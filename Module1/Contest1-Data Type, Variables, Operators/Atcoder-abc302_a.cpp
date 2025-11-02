#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a , b;
    cin >> a >> b;
    long long div = a/b;
    if ((a%b) != 0)
    {
        cout << div + 1 << endl;
    }
    else
    {
        cout << div << endl;
    }

    return 0;
}