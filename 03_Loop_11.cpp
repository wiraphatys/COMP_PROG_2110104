#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double mean, total_x = 0, n = 0, number;
    cin >> number;

    while (number != -1)
    {
        n++;
        total_x += number;
        cin >> number;
    }

    mean = total_x / n;

    if (total_x == 0)
    {
        cout << "No Data";
    }
    else
    {
        cout << round(mean * 100) / 100;
    }
}