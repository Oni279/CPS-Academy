#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    long long value = pow(a, b) + pow(b, a);
    cout << value << endl;

    return 0;
}