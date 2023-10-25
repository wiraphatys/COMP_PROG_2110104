#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    double x[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> x[i][j];
        }
    }

    double sum = 0;
    for (int i = 0; i < a - 2; i++)
    {
        for (int j = 0; j < b - 2; j++)
        {
            for (int k = i; k < i + 3; k++)
            {
                for (int l = j; l < j + 3; l++)
                {
                    sum += x[k][l];
                }
            }
            sum /= 9;
            if (j == b - 3)
                cout << round(sum * 100) / 100.0 << endl;
            else
                cout << round(sum * 100) / 100.0 << ' ';
            sum = 0;
        }
    }
    return 0;
}
