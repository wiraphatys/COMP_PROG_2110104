#include <bits/stdc++.h>
using namespace std;
int main() {
    double k;
    int s, count = 0;
    cin >> k;
    set<int> A;
    while (cin >> s) {
        if (s <= k) A.insert(s);
    }
    for (auto itr = A.begin(); *itr < k/2 ; ++itr) {
        if (A.find(abs(*itr - k)) != A.end()) count++;
    }
    cout << count;
    return 0;
}