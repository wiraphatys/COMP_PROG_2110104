#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<double> > v;
    for (int i = 0; i < n; ++i) {
        double x, y, d;
        cin >> x >> y;
        d = sqrt(pow(x,2) + pow(y,2));
        vector<double> temp;
        temp.push_back(d);
        temp.push_back(i+1);
        temp.push_back(x);
        temp.push_back(y);
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    cout << "#" << v[2][1] << ": (" << v[2][2] << ", " << v[2][3] << ")";
    return 0;
}