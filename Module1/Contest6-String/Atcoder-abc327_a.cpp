#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        if(s[i] == 'a' && s[i+1] == 'b') flag = true;
       else if(s[i] == 'b' && s[i+1] == 'a') flag = true;
    }
    if(flag) 
    cout << "Yes" <<endl;
    else 
    cout << "No" << endl;
    
    return 0;
}