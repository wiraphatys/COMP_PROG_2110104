#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    cin >> x;

    // equation
    y = (pow(x, sqrt(log(pow(x + 1, 2))))) / (10 - x);

    // display
    cout << round(y * 1e6) / 1e6 << endl;
}