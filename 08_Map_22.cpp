#include <bits/stdc++.h>
using namespace std;

int main(){
    string str, order, currency;
    map<string, double> exchangeRate;
    vector<string> orders;
    int N;
    int money;
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; ++i){
        string cur;
        double price;
        cin >> cur >> price;
        exchangeRate[cur] = price;
    }
    cin.ignore();
    getline(cin, order);
    istringstream iss(order);
    string item;
    while (iss >> item){
        orders.push_back(item);
    }
    money = stoi(orders[0]);
    currency = orders[1];
    cout << money << ' ' << currency;
    for (size_t i = 2; i < orders.size(); ++i){
        if (currency == orders[i])
{
            cout << " -> " << money << ' ' << orders[i];
        }
        else
        {
            if (currency == "THB"){
                money /= (exchangeRate[orders[i]]);
                cout << " -> " << money << ' ' << orders[i];
            }
            else if (orders[i] == "THB"){
                money *= exchangeRate[currency];
                cout << " -> " << money << ' ' << orders[i];
            }
            else{
                money = money * exchangeRate[currency] / exchangeRate[orders[i]];
                cout << " -> " << money << ' ' << orders[i];
            }
        }
        currency = orders[i];
    }
    return 0;
}