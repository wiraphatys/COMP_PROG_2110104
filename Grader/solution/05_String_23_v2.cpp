#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    int n;
    cin >> a >> n;
    int x456 = stoi(a.substr(4)) + n;
    int temp = x456/1000;
    a[6] = char('0' + x456 % 10);
    a[5] = char('0' + (x456 / 10) % 10);
    a[4] = char('0' + (x456 / 100) % 10);
    a[2] = a[2] + (temp % 26);
    a[1] = a[1] + (temp / 26);
    a[0] = a[0] + ((temp / 26) / 26);
    cout << a;
    return 0;
}