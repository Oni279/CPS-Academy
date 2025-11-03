#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int arr[7], sum = 0;
        for (int i = 0; i < 7; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }
        cout << sum <<" ";
    }

    return 0;
}