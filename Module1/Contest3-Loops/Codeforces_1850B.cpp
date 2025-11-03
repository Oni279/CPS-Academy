#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int j =1 ; j <= t ; j++)
    {
        int n;
        cin >> n;
        int winner = -1, best_score = 0;
        for (int i = 1; i <= n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (best_score < b && a <= 10)
            {
                winner = i;
                best_score = b;
            }
        }
        cout << winner << endl;
    }

    return 0;
}