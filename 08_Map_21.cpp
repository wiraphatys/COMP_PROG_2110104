#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, vector<string> > data;
    vector<string> v;
    string input;
    while (getline(cin, input))
    {
        istringstream iss(input);
        string name, type;
        while (iss >> name >> type)
        {
            if (data.find(type) == data.end()) {
                v.push_back(type);
            }
            data[type].push_back(name);
        }
    }
    for (auto& e : v) {
        cout << e << ':';
        for (auto& i : data[e]) {
            cout << ' ' << i;
        }
        cout << endl;
    }
    return 0;
}