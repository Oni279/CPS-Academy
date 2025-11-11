#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool flag = true;
    for (int i = 1; i <= 16; i+=2)
    {
        if(s[i] != '0')
        {
            flag = false;
            break;
        }
    }
    if(!flag) cout << "No" <<endl;
    else cout << "Yes" << endl;
    

    return 0;
}