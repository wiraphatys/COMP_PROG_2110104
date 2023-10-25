#include <bits/stdc++.h>
using namespace std;

int main() {
    int vote, left, totalVote = 0, sum = 0;
    double votePerPerson;
    string party;
    vector<pair<int, pair<int, string>>> data;
    map<double, string> LeftSection;
    while (cin >> party) {
        if (party == "END") {
            break;
        }
        cin >> vote;
        totalVote += vote;
        data.push_back(make_pair(-vote, make_pair(0, party)));
    }
    votePerPerson = totalVote / 100;
    for (auto &p : data) {
        p.second.first = (-p.first) / votePerPerson;
        sum += p.second.first;
    }
    if (sum != 100) {
        left = 100 - sum;
        for (auto &p : data) {
            double temp = (-p.first) / votePerPerson;
            LeftSection[-(temp - p.second.first)] = p.second.second;
        }
        for (auto &map : LeftSection) {
            for (auto &p : data) {
                if (map.second == p.second.second) {
                    p.second.first++;
                    break;
                }
            }
            left--;
            if (left == 0) {
                break;
            }
        }
    }
    sort(data.begin(), data.end());
    for (auto p : data) {
        if (p.second.first == 0) continue;
        cout << p.second.second << ' ' << p.second.first << ' ' << -(p.first) << "\n";
    }
    return 0;
}