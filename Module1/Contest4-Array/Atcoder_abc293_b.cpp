#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[20000001];
    bool b[20000001];
    for (int i = 1; i < n + 1; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n + 1; i++)
    {
        if (b[i] == false)
        {
            b[a[i]] = true;
        }
    }
    int k = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (b[i] == false)
        {
            k++;
        }
    }
    cout << k << endl;
    for (int i = 1; i < n + 1; i++)
    {
        if (b[i] == false)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}