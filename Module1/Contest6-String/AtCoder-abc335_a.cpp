#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    if(s[n-1] == '3') s[n - 1] = '4';
    cout << s << endl;

    return 0;
}