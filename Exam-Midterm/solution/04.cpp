#include <bits/stdc++.h>
using namespace std;

int main()
{
    int K;
    cin >> K;

    long long number[K];
    int a, b, n, m;
    for (int i = 0; i < K; i++)
    {
        cin >> a >> n >> b >> m;
        int digit;
        long long x = 0;
        if (m == 1)
        {
            x += b;
        }
        else
        {
            for (int j = m; j >= 0; j--)
            {
                x += pow(10, j - 1) * b;
            }
        }
        digit = to_string(x).size();
        for (int z = digit; z < digit + n; z++)
        {
            x += pow(10, z) * a;
        }
        number[i] = x;
    }
    for (int i = 0; i < K; i++)
    {
        int state = 1;
        long long x = number[i];
        if (x % 2 == 0 || x % 10 == 0 || x % 10 == 5 || x % 10 == 2)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int j = 2; j < sqrt(x); j++)
        {
            if (x % j == 0)
            {
                cout << "NO" << endl;
                state = 0;
                break;
            }
        }
        if (state == 1)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}