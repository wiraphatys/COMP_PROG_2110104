#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    string a, n, c, d;
    while (cin >> a >> n)
    {
        c = a.substr(a.length() - 1, 1);
        if (n.length() > 1)
        {
            d = n.substr(n.length() - 2, 2);
        }
        else
        {
            d = n;
        }
        int base = stoi(c);
        int power = stoi(d);
        if (power == 0)
        {
            power %= 4;
        }
        else
        {
            power %= 4;
            power += 4;
        }
        int result = pow(base, power);
        cout << ">> " << result % 10 << endl;
    }
    return 0;
}

// 1 is always 1
// 2 => 2 4 8 6
// 3 => 3 9 7 1
// 4 => 4 6 4 6
// 5 is always 5
// 6 is always 6
// 7 => 7 9 3 1
// 8 => 8 4 2 6
// 9 => 9 1 9 1
// 0 is always 0