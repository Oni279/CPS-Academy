#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n[t],x[t];
    for (int i = 0; i < t; i++)
    {
        cin >> n[i] >> x[i];
    }
    for (int i = 0; i < t; i++)
    {
        int total = 2*n[i];
        int unrated = total - x[i];
        if (n[i] >= x[i])
        {
            cout << "0" << endl;
        }
        else
        {
            cout << (x[i] - unrated) << endl;
        }
        
    }
    
    

    return 0;
}