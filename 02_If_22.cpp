#include <iostream>
using namespace std;

#include <iostream>

bool isLeapYearBE(int year)
{
    // Offset between Gregorian and Buddhist calendars
    const int offset = 543;

    // Adjust the input year to correspond to the Gregorian calendar
    int gregorianYear = year - offset;

    // Check for leap year using the standard Gregorian leap year logic
    if ((gregorianYear % 4 == 0 && gregorianYear % 100 != 0) || gregorianYear % 400 == 0)
    {
        return true; // Leap year
    }
    else
    {
        return false; // Not a leap year
    }
}

int main()
{
    // input
    int d, m, y, result, Feb;
    cin >> d >> m >> y;

    // check leap year
    if (isLeapYearBE(y))
    {
        Feb = 29;
    }
    else
    {
        Feb = 28;
    }

    // preocessing
    result = 0;
    if (m == 1)
    {
        result = d;
    }
    else if (m == 2)
    {
        result = 31 + d;
    }
    else if (m == 3)
    {
        result = 31 + Feb + d;
    }
    else if (m == 4)
    {
        result = 31 + Feb + 31 + d;
    }
    else if (m == 5)
    {
        result = 31 + Feb + 31 + 30 + d;
    }
    else if (m == 6)
    {
        result = 31 + Feb + 31 + 30 + 31 + d;
    }
    else if (m == 7)
    {
        result = 31 + Feb + 31 + 30 + 31 + 30 + d;
    }
    else if (m == 8)
    {
        result = 31 + Feb + 31 + 30 + 31 + 30 + 31 + d;
    }
    else if (m == 9)
    {
        result = 31 + Feb + 31 + 30 + 31 + 30 + 31 + 31 + d;
    }
    else if (m == 10)
    {
        result = 31 + Feb + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d;
    }
    else if (m == 11)
    {
        result = 31 + Feb + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d;
    }
    else if (m == 12)
    {
        result = 31 + Feb + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;
    }

    // display
    cout << result;
}