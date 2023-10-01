#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int year_buddha, year_christ;
    int y, z, result;

    cin >> year_buddha;

    year_christ = year_buddha - 543;
    y = year_christ % 100;
    z = y / 4;

    result = (y + z + 11) % 7;
    cout << result << endl;
}

//