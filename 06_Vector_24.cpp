#include <bits/stdc++.h>
#include <tuple>
using namespace std;

int main() {
    string id;
    double price;
    cin >> id;
    vector< tuple<double, string, double> > v;
    while (id != "END") {
        cin >> price;
        v.push_back(make_tuple(0,id,price));
        cin >> id;
    }
    cin.ignore();
    string x;
    getline(cin, x);
    istringstream iss(x);
    vector<string> order;
    string token;
    while (iss >> token) {
        order.push_back(token);
    }
    for (string & item : order)
    {
        for (size_t i = 0; i < v.size(); ++i)
        {
            if (get<1>(v[i]) == item)
            {                                             
                get<0>(v[i]) -= get<2>(v[i]);
                break;
            }
        }
    }
    sort(v.begin(),v.end());
    for (size_t i=0; i<v.size(); ++i)
    {
        if (get<0>(v[i])){
            if (i==3) break;
            cout << get<1>(v[i]) << ' ' << get<0>(v[i])*(-1) << endl;
        }
        else {
            cout << "No Sales"; break;
        }
    }
    return 0;
}