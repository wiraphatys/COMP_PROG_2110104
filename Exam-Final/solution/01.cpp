#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, m, val;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        long long int sum = 0;
        vector<int> v;
        cin >> m;
        for (int j = 0; j < m; ++j) {
            cin >> val;
            v.push_back(val);
        }
        sort(v.begin(), v.end());
        v.erase(v.begin());
        for (auto item : v) {
            sum += item;
        }
        cout << sum << endl;
    }
    return 0;
}