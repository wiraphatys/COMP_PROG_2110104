#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    int n;
    cin >> a >> n;
    b = a;
    int x456 = stoi(a.substr(4)) + n;
    int carry = x456 / 1000;
    b[6] = char('0' + x456 % 10);
    b[5] = char('0' + (x456 / 10) % 10);
    b[4] = char('0' + (x456 / 100) % 10);
    b[2] = char((a[2] + carry - 65) % 26 + 65);
    carry = (a[2] + carry - 65) / 26;
    b[1] = char((a[1] + carry - 65) % 26 + 65);
    carry = (a[1] + carry - 65) / 26;
    b[0] = char(a[0] + carry);
    cout << b;
    return 0;
}