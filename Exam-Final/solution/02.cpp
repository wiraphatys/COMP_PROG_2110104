#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, score;
    string name;
    map<int, set<string> > data;
    set<string> check;
    cin >> N;
    for (auto i = 0; i < N; ++i) {
        cin >> name >> score;
        data[-score].insert(name);
    }
    cin >> M;
    for (auto& p : data) {
        if (M <= 0) break;
        cout << -(p.first);
        for (auto& name : p.second) {
            if (check.find(name) != check.end()) continue;
            cout << ' ' << name;
            check.insert(name);
            M--;
        }
        cout << endl;
    }
    return 0;
}