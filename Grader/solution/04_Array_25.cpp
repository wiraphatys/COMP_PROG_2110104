#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, result = 0;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        v.push_back(x);
    }
    int maxLeft = v[0], maxRight = v[v.size() - 1];
    int L = 0, R = v.size() - 1;
    while (L < R) {
        if (maxLeft < maxRight) {
            L++;
            maxLeft = max(maxLeft, v[L]);
            result += maxLeft - v[L];
        }
        else {
            R--;
            maxRight = max(maxRight, v[R]);
            result += maxRight - v[R];
        }
    }
    cout << result;
    return 0;
}