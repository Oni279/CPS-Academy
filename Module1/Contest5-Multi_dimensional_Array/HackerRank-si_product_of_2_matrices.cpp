#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n1, m1;
        cin >> n1 >> m1;
        int a[n1][m1];
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m1; j++)
            {
                cin >> a[i][j];
            }
        }
        int n2, m2;
        cin >> n2 >> m2;
        int b[n2][m2];
        for (int i = 0; i < n2; i++)
        {
            for (int j = 0; j < m2; i++)
            {
                cin >> b[i][j];
            }
        }
        int mat[n1][m2];
        
        
            for (int i = 0; i < n1; i++)
            {
                for (int j = 0; j < m2; j++)
                {
                    mat[i][j] = a[i][j] * b[j][i];
                    cout << mat[i][j] << " ";
                }
                cout << endl;
            }
        
    }

    return 0;
}