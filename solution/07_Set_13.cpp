#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    set<string> W,L,result;
    while (getline(cin, str)) {
        int key = str.find(' ');
            W.insert(str.substr(0,key));
            L.insert(str.substr(key+1));
        }
    for (auto itr = W.begin(); itr != W.end(); ++itr) {
        if (L.find(*itr) == L.end()) {
            result.insert(*itr);
        }
    }
    if (result.size() == 0) {
        cout << "None";
        return 0;
    }
    for (auto itr = result.begin(); itr != result.end(); ++itr) {
        cout << *itr;
        if (next(itr) != result.end()) {
            cout << ' ';
        }
    }
    return 0;
}