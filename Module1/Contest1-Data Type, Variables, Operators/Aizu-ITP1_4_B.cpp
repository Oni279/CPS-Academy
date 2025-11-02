#include <bits/stdc++.h>
using namespace std;
int main()
{
    double r;
    double pi = M_PI;
    cin >> r;
    double area = pi * r * r * (1.0);
    double cir = 2 * pi * r * (1.0);
    cout << fixed << setprecision(6) << area << " " << cir << endl;
    return 0;
    
}
