#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n)
{
    return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main()
{
    cout << (M_PI - (factorial(10) / pow(8, 8)) + pow(log(9.7), (7 / pow(71, 0.5)) - sin((double)40 * M_PI / 180))) / pow(1.2, pow(2.3, (double)1 / 3)) << endl;

    return 0;
}