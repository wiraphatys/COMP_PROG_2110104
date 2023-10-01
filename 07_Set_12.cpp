#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> A;
    while (A.find(n) == A.end()) {
        A.insert(n);
        cin >> n;
    }
    cout << A.size() + 1;
    
    return 0;
}