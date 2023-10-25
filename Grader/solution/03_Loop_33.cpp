#include <iostream>
using namespace std;

int main()
{
    int x, y, minA = -1, maxA = -1, minB = -1, maxB = -1, count = 1;
    cin >> x;

    while (x != -998 && x != -999)
    {
        cin >> y;

        if (minA == -1 && maxA == -1)
        {
            minA = x;
            maxA = x;
        }
        if (minB == -1 && maxB == -1)
        {
            minB = y;
            maxB = y;
        }

        // บรรทัดเลขคู่
        if (count % 2 == 0)
        {
            if (y > maxA)
            {
                maxA = y;
            }
            if (y < minA)
            {
                minA = y;
            }
            if (x > maxB)
            {
                maxB = x;
            }
            if (x < minB)
            {
                minB = x;
            }
        }
        // บรรทัดเลขคี่
        else
        {
            if (x > maxA)
            {
                maxA = x;
            }
            if (x < minA)
            {
                minA = x;
            }
            if (y > maxB)
            {
                maxB = y;
            }
            if (y < minB)
            {
                minB = y;
            }
        }
        count++;
        cin >> x;
    }
    if (x == -998)
    {
        // Zig-Zag
        cout << minA << ' ' << maxB;
    }
    else if (x == -999)
    {
        // Zag-Zig
        cout << minB << ' ' << maxA;
    }
}
