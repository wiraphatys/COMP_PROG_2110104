#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> sara;
    for (int i = 0; i < 5; ++i) {
        sara.push_back('a');
        sara.push_back('e');
        sara.push_back('i');
        sara.push_back('o');
        sara.push_back('u');
    }

    int key1 = -1, key2 = -1;
    vector<string> v;
    string str;
    getline(cin, str);
    istringstream iss(str);
    string s;
    while (iss >> s) {
        v.push_back(s);
    }
    string a = v[0];
    string b = v[int(v.size()) - 1];
    for (size_t i = 0; i < sara.size(); ++i) {
        if (a.find(sara[i]) != string::npos) {
            key1 = a.find(sara[i]);
            break;
        }
    }
    for (size_t i = 0; i < sara.size(); ++i) {
        if (b.find(sara[i]) != string::npos) {
            key2 = b.find(sara[i]);
            break;
        }
    }
    string temp1 = a.substr(key1);
    string temp2 = b.substr(key2);
    v[0] = a.substr(0,key1) + temp2;
    v[int(v.size() - 1)] = b.substr(0,key2) + temp1;
    cout << v[0];
    for (size_t i = 1; i < v.size(); ++i) {
        cout << ' ' << v[i]; 
    }
    return 0;
}