#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string x, y;
    cin >> x >> y;

    int cx = 0, cy = 0;
    string resx, resy;

    int key1 = 0, key2 = 0;
    for (size_t i = 0; i < y.size(); i++)
    {
        int count = 0;
        string tempstr(i, '-');
        tempstr += x;

        for (int j = 0; j < min((int)y.size(), (int)tempstr.size()); j++)
        {
            if (tempstr[j] == y[j])
            {
                count++;
            }
        }

        if (count > cx)
        {
            cx = count;
            resx = tempstr;
            key1 = i;
        }
    }

    for (size_t i = 0; i < x.size(); i++)
    {
        int count = 0;
        string tempstr(i, '-');
        tempstr += y;

        for (int j = 0; j < min((int)x.size(), (int)tempstr.size()); j++)
        {
            if (tempstr[j] == x[j])
            {
                count++;
            }
        }

        if (count > cy)
        {
            cy = count;
            resy = tempstr;
            key2 = i;
        }
    }
    if (cx > cy)
    {
        cout << resx << '\n'
             << y << '\n'
             << cx << '\n';
    }
    else if (cx < cy)
    {
        cout << x << '\n'
             << resy << '\n'
             << cy << '\n';
    }
    else if (cx == 0 && cy == 0)
    {
        cout << x << '\n'
             << y << '\n'
             << 0 << '\n';
    }
    else if (cx == cy)
    {
        if (key1 > key2)
        {
            cout << x << '\n'
                 << resy << '\n'
                 << cy << '\n';
        }
        else
        {
            cout << resx << '\n'
                 << y << '\n'
                 << cx << '\n';
        }
    }
    return 0;
}