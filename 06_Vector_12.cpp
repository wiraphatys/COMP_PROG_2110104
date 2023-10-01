#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    v.push_back(n);
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            v.push_back(n);
        }
        else
        {
            n = 3 * n + 1;
            v.push_back(n);
        }
    }
    int len = v.size();
    auto itr = (len > 15) ? v.end() - 15 : v.begin();
    for (; itr != v.end(); ++itr)
    {
        cout << *itr;
        if (itr + 1 != v.end())
            cout << "->";
    }
    return 0;
}