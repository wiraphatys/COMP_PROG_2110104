#include <bits/stdc++.h>
using namespace std;

string upgrade(string & g) {
    if (g == "F") {
        g = "D";
    } else if (g == "D") {
        g = "D+";
    } else if (g == "D+") {
        g = "C";
    } else if (g == "C") {
        g = "C+";
    } else if (g == "C+") {
        g = "B";
    } else if (g == "B") {
        g = "B+";
    } else if (g == "B+") {
        g = "A";
    }
    return g;
}

int main() {
    string id, g;
    cin >> id;
    vector<pair<string,string> > v;
    while (id != "q") {
        cin >> g;
        v.push_back(make_pair(id,g));
        cin >> id;
    }
    cin.ignore();
    string x;
    getline(cin, x);
    istringstream iss(x);
    vector<string> order;
    string token;
    while (iss >> token) {
        order.push_back(token);
    }
    for (size_t i = 0; i < order.size(); ++i) {
        for (size_t j = 0; j < v.size(); ++j) {
            if (order[i] == v[j].first) {
                upgrade(v[j].second);
            }
        }
    }
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i].first << ' ' << v[i].second << "\n";
    }
    return 0;
}