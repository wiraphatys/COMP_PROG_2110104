#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string mo[13] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    string a;
    cin >> a;
    string m = " ";
    for (int i = 3; i <= 4; i++)
    {
        m += a[i];
    }
    int mm = stoi(m);

    string y = " ";
    for (int i = 6; i < 10; i++)
    {
        y += a[i];
    }
    int yy = stoi(y) - 543;
    int dd = 10 * (a[0] - 48) + a[1] - 48;

    cout << mo[mm - 1] << " " << dd << ","
         << " " << yy;

    return 0;
}