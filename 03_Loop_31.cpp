#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    long long x, y, result = 0;
    cin >> x >> y;

    string m = to_string(x);
    string n = to_string(y);

    if (m.size() == n.size())
    {
        result += (y - x + 1) * m.size();
    }
    else
    {
        if (n.size() - m.size() == 1)
        {
            result += ((long long)pow(10, m.size()) - x) * m.size();
            result += (y - (long long)pow(10, m.size()) + 1) * n.size();
        }
        else
        {
            result += ((long long)pow(10, m.size()) - x) * m.size();
            result += (y - (long long)pow(10, n.size() - 1) + 1) * n.size();
            for (size_t i = m.size() + 1; i < n.size(); i++)
            {
                // i=3
                // (10**3 - 1) - 10**2
                result += ((long long)pow(10, i) - (long long)pow(10, i - 1)) * i;
            }
        }
    }
    cout << result;
}