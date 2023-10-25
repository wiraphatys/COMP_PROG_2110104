#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, t;
    string name, dept;
    string a, b;
    map<string, set<string> > data;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> name >> dept;
        data[dept].insert(name);
    }

    for (int i = 0; i < m; ++i) {
        cin >> t >> a >> b;
        // ย้ายแผนก
        if (t == 1) {
            for (auto& p : data) {
                if ((p.second).find(a) != (p.second).end()) {
                    (p.second).erase(a);
                    break;
                }
            }
            data[b].insert(a);
        } else if (t == 2) {
            for (auto& person : data[a]) {
                data[b].insert(person);
            }
            data.erase(a);
        }
    }
    for (auto p : data) {
        cout << p.first << ':';
        for (auto item : p.second) {
            cout << ' ' << item;
        }
        cout << endl;
    }
    return 0;
}