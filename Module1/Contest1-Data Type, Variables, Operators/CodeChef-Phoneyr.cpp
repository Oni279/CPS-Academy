#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int mod = x % 100;
    if (mod == 0)
    {
        cout << "K00" << endl;
    }
    else if (mod >= 1 && mod <= 9)
    {
        cout << "K0" << mod << endl;
    }

    else
    {
        cout << "K" << mod << endl;
    }
}