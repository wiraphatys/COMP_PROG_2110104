#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    if (n % 2 != 0)
    {
        int sum_a = 0, sum_b = 0, sum_c = 0, m = 0;
        while (m < k)
        {
            int a, b, c;
            cin >> a >> b >> c;
            if (a == b)
            {
                if (a == b && b == c && a == c)
                {
                    if (a + b > k)
                    {
                        sum_a++;
                        sum_b += 2;
                        sum_c -= 3;
                    }
                    else
                    {
                        sum_a -= 3;
                        sum_b -= 2;
                        sum_c += 1;
                    }
                }
                else
                {
                    sum_a += 2;
                    sum_b -= 3;
                }
            }
            m++;
        }
        cout << sum_a << "\n";
        cout << sum_b << "\n";
        cout << sum_c << "\n";
    }
    else
    {
        int s, t, x, y;
        cin >> s >> t;
        x = s;
        y = t;
        if (s > t)
        {
            x = s - t;
        }
        else if (s < t)
        {
            y = 2 * (t - s);
        }
        if (x + y > k)
        {
            swap(x, y);
            x = y + pow(s, 2);
        }
        cout << x << "\n";
        cout << y << "\n";
    }
}