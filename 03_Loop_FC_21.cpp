#include <iostream>
using namespace std;

int main()
{
    float p;
    int k = 1;
    double t = 1.0;
    cin >> p;
    do
    {
        t = (t * (365 - (k - 1))) / 365;
        k++;
    } while (1 - t < p);

    cout << k - 1;
}