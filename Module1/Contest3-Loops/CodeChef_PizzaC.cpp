#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n[t];
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < t; i++)
    {
        
        if (n[i] % 2 == 0  || n[i] == 1)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
        
    }
    

    return 0;
}