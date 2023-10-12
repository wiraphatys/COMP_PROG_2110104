#include <bits/stdc++.h>
using namespace std;

int timeCalculate(vector<string> v) {
    int result = 0, key;
    for (size_t i = 0; i < v.size(); ++i) {
        key = v[i].find(':');
        result += stoi(v[i].substr(0,key)) * 60;
        result += stoi(v[i].substr(key+1));
    }
    // result += to_string(sec / 60) + ':' + to_string(sec % 60);
    return -result;
}

int main() {
    string temp1, temp2, category, duration;
    map<string, vector<string> > raw_data;
    map<int, string> data;
    while(cin >> temp1) {
        cin >> temp2 >> category >> duration;
        raw_data[category].push_back(duration);
    }
    for (auto itr = raw_data.begin(); itr != raw_data.end(); ++itr) {
        int result = timeCalculate((*itr).second);
        data[result] = (*itr).first;
    }
    int c = 0;
    for (auto itr = data.begin(); itr != data.end(); ++itr, ++c) {
        if (c == 3) {
            break;
        }
        int sec = -((*itr).first);
        cout << (*itr).second << " --> " << to_string(sec / 60) << ':' << to_string(sec % 60) << "\n";
    }
    return 0;
}