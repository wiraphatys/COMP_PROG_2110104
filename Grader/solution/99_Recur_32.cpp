#include <bits/stdc++.h>
using namespace std;

int n, a, b, x, y;
vector<pair<int, int> > v;
bool state = false;

void warp(int now) {
    if (now == b) {
        state = true;
        return;
    }
    for (auto& pair : v) {
        if(state == true) break;
        if (pair.first == now) {
            warp(pair.second);
        }
    }
    return ;
}

int main() {
    cin >> n >> a >> b;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    for (auto& pair : v) {
        if (pair.first == a) {
            warp(pair.second);
        }
    }
    cout << (state ? "yes" : "no") << endl;
    return 0;
}
