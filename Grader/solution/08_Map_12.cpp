#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    string str, query;
    map<string, string> data;
    cin >> N;
    cin.ignore();
    for (auto i = 0; i < N; ++i) {
        getline(cin, str);
        auto itr = str.rfind(' ');
        string name = str.substr(0, itr);
        string tel = str.substr(itr+1);
        data.insert(pair<string, string>(name,tel));
        data.insert(pair<string, string>(tel,name));
    }
    cin >> M;
    cin.ignore();
    for (auto i = 0; i < M; ++i) {
        getline(cin, query);
        if (data.find(query) != data.end()) {
            cout << query << " --> " << data[query] << "\n";
        } else {
            cout << query << " --> " << "Not found" << "\n";
        }
    }
    return 0;
}