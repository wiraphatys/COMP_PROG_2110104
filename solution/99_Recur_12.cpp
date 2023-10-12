#include <bits/stdc++.h>
using namespace std;

int PowerMod(int a, int k, int m) {
    if (k == 0) {
        return 1;
    } else if (k % 2 == 0) {
        return int(pow(PowerMod(a, k / 2, m), 2)) % m;
    } else {
        return int(a * pow(PowerMod(a, k / 2, m), 2)) % m;
    }
}

int main() {
    int a, k, m;
    cin >> a >> k >> m;
    cout << PowerMod(a, k, m);
    return 0;
}