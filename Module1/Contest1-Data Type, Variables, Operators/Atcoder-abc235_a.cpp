#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int d = x / 10;
    int c = x % 10;
    int b = d % 10;
    int a = d / 10;
    int y = (b * 100) + (c * 10) + a;
    int z = (c * 100) + (a * 10) + b;
    cout << x + y + z << endl;

    return 0;
    
}