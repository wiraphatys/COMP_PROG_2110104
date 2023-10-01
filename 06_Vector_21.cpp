#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin >> x;
    vector<string> v;
    string y = x + '$';
    v.push_back(y);
    for (size_t i = 0; i < x.size(); i++)
    {
        y += y[0];
        y.erase(0, 1);
        v.push_back(y);
    }
    sort(v.begin(), v.end());
    string result = "";
    for (size_t i = 0; i < v.size(); i++)
    {
        result += v[i][v[i].size() - 1];
    }
    cout << result;
    return 0;
}