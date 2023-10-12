#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // A[3] = {1,8,7}
    double A[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }

    cout << A[0] << endl;

    for (int i = 1; i < n; ++i)
    {
        double sum = 0;
        int c = 0;
        for (int j = i; j >= 0; j--)
        {
            if (c == 0)
            {
                sum += pow(A[j], -1);
            }
            else if (c == 1)
            {
                sum += A[j];
            }
            else
            {
                sum = pow(sum, -1) + A[j];
            }
            c++;
        }
        cout << setprecision(10) << sum << endl;
    }
    return 0;
}
