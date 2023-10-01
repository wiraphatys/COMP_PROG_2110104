#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v, unique;
    int n;
    while (cin >> n)
    {
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    unique.push_back(v[0]);
    for (auto i = 1; i < v.size(); i++)
    {
        if (find(unique.begin(), unique.end(), v[i]) == unique.end())
        {
            unique.push_back(v[i]);
        }
    }
    int len = (unique.size() >= 10) ? 10 : unique.size();
    cout << unique.size() << "\n";
    for (int i = 0; i < len; ++i)
    {
        cout << unique[i];
        if (i != len - 1)
        {
            cout << ' ';
        }
    }
    return 0;
}