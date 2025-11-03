#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,x[50];
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < t; i++)
    {
        cout << x[i] - 10 << endl;
    }
    

    return 0;
}