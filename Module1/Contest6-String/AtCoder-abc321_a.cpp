#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    for (int i = 1; i < (n.size()); i++)
    {
        if (n[i - 1] <= n[i])
        {
            cout << "No" <<endl;
            return 0;
        }
    }
    cout << "Yes" <<endl;

    return 0;
}