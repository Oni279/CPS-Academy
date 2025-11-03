#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[8];
    
    for (int i = 0; i < 8; i++)
    {
        cin >> a[i];
    }
    int temp = 0;
    for (int i = 0; i < 7; i++)
    {
        if ((a[i] >= a[i + 1]) || a[i] < 100 || a[i] > 675 || a[i] % 25 != 0)
            temp++;
       
        
    }
    if (temp == 0)
    {
        cout << "Yes" <<endl;
    }
    else
    {
        cout << "No" <<endl;
    }
    

    return 0;
}