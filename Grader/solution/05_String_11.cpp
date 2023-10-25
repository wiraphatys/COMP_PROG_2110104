#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, ans;
    while (getline(cin, a))
    {
        char sign = a[a.length() - 1];
        ans = "";
        bool $trig = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == sign)
                $trig = $trig == 1 ? 0 : 1;
            else if ($trig == 1)
                ans += a[i];
        }
        cout << ans << endl;
    }
    return 0;
}