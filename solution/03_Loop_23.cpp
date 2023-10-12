#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    char a = '*';
    int k = 1, n;
    getline(cin, str);
    cin >> n;
    for (int i = 0; i < str.length(); i++)
    {
        if (a == str[i])
        {
            k++;
        }
        else if (a != str[i])
        {
            if (a != '*' && k < n)
            {
                cout << string(k, a);
            }
            a = str[i];
            k = 1;
        }
    }
    if (k < n)
    {
        cout << string(k, a);
    }
    return 0;
}
