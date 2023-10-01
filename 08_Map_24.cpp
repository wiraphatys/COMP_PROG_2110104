#include <bits/stdc++.h>
using namespace std;

int main() {
    double N, M, sum = 0, m = 0;
    map<string, double> icecream;
    map<string, double> order;
    cin >> N;
    string s;
    double d;
    while (N--){
        cin >> s >> d;
        icecream[s] = d;
        order[s] = 0;
    }
    cin >> M;
    while (M--){
        cin >> s >> d;
        if (icecream.find(s)!=icecream.end()){
            sum += icecream[s]*d;
            order[s] += icecream[s]*d;
        }
        m = max(m, order[s]);
    }
    if (sum){
        cout << "Total ice cream sales: " << sum << endl;
        cout << "Top sales:";
        for (auto itr=order.begin(); itr!=order.end(); itr++)
            if ((*itr).second == m)
                cout << " " << (*itr).first;
    }
    else
        cout << "No ice cream sales";
    return 0;
}