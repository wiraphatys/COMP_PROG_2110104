#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> department;
    for (int i = 0; i < n; ++i) {
        string major;
        int amount;
        cin >> major >> amount;
        department[major] = amount;
    }
    int m;
    cin >> m;
    map<double, vector<string>, greater<double> > students;
    for (int i = 0; i < m; ++i) {
        string id, a, b, c, d;
        double score;
        cin >> id >> score >> a >> b >> c >> d;
        students[score].push_back(id);
        students[score].push_back(a);
        students[score].push_back(b);
        students[score].push_back(c);
        students[score].push_back(d);
    }
    map<string, string> result;
    for (auto itr = students.begin(); itr != students.end(); ++itr) {
        // {23.6, {59301234521 PE CP MT CHE}}
        int c = 1;
        vector<string> data = (*itr).second;
        for (auto i = 0; i < 4; ++i){
            if (department[data[c]] != 0) {
                result[data[0]] = data[c];
                department[data[c]]--;
                break;
            } else {
                c++;
            }
        }
    }
    for (auto pair : result) {
        cout << pair.first << ' ' << pair.second << endl;
    }
    return 0;
}