#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    string fname, nickname;
    map<string,string> data, reverseData;
    for (auto i = 0; i < N; ++i) {
        cin >> fname >> nickname;
        data.insert(pair<string, string>(fname, nickname));
        reverseData.insert(pair<string, string>(nickname, fname));
    }
    int M;
    string str;
    cin >> M;
    for (auto i = 0; i < M; ++i) {
        cin >> str;
        if (data.find(str) != data.end()) {
            cout << data[str] << endl;
        } else if (reverseData.find(str) != reverseData.end()){
            cout << reverseData[str] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    return 0;
}