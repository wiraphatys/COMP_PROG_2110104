#include <bits/stdc++.h>
using namespace std;

int n, a, b, x, y;
vector<pair<int, int>> v;
vector<int> path;
set<vector<int>> paths;
bool state = false;

void warp(int now) {
    path.push_back(now);
    if (now == b) {
        paths.insert(path);
        state = true;
    }
    for (auto &pair : v) {
        if (pair.first == now && pair.second <= b)
        {
            warp(pair.second);
        }
    }
    path.pop_back();
}

int main() {
    cin >> n >> a >> b;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    warp(a);
    if (!state) {
        cout << "no";
    }
    else {
        for (auto &p : paths) {
            for (auto itr = p.begin(); itr != p.end(); ++itr) {
                cout << *itr;
                if (next(itr) != p.end()) {
                    cout << " -> ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
