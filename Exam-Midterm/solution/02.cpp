#include <bits/stdc++.h>
using namespace std;

int main()
{
    double u, x, t, g = 10;
    cin >> u >> x >> t;

    double h, r;
    h = (t - (u * sin(x * M_PI / 180) / g)) * (u * sin(x * M_PI / 180) + 0.5 * g * (t - 3 * (u * sin(x * M_PI / 180) / g)));
    r = u * (cos(x * M_PI / 180)) * t;

    cout << round(h * 10) / 10 << ' ' << round(r * 10) / 10;

    return 0;
}