#include <bits/stdc++.h>
using namespace std;
void to_lower(string &x)
{
    for (auto &c : x)
    {
        c = tolower(c);
    }
}
int main()
{
    multiset<char> A, B;
    string a, b;
    getline(cin, a);
    getline(cin, b);
    to_lower(a);
    to_lower(b);
    for (size_t i = 0; i < a.size(); ++i)
    {
        if (a[i] != ' ')
        {
            A.insert(a[i]);
        }
    }
    for (size_t i = 0; i < b.size(); ++i)
    {
        if (b[i] != ' ')
        {
            B.insert(b[i]);
        }
    }
    if (A == B)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}