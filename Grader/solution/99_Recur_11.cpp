#include <bits/stdc++.h>
using namespace std;

string dec2hex(int d) {
    string result;
    string alpha = "ABCDEF";
    if (d < 10) {
        result = to_string(d);
        return result;
    } else if (d < 16) {
        result += alpha[d - 10];
        return result;
    } else {
        return dec2hex(d/16) + dec2hex(d%16);
    }
}
int main() {
    int d;
    while (cin >> d) {
        cout << d << " -> " << dec2hex(d) << endl;
    }
    return 0;
}