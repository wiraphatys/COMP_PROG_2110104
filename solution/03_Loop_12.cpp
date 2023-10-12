#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, result, key;
    cin >> a;

    key = 2.91038e-11;

    if (a == 1.0)
    {
        cout << key;
    }
    else
    {
        result = log10(a);
        cout << result;
    }
}