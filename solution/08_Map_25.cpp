#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int n;
    string ID, keyID, city;
    unordered_map<string, vector<string> > data;
    vector<string> result;
    cin >> n;
    vector<string> inputOrder;
    for (auto i = 0; i < n; ++i){
        cin >> ID;
        inputOrder.push_back(ID);
        while (cin >> city) {
            if (city == "*") {
                break;
            }
            data[ID].push_back(city);
        }
    }
    cin >> keyID;
    vector<string> keyTravel = data[keyID];
    for (auto i = 0; i < inputOrder.size(); ++i) {
        string receivedID = inputOrder[i];
        if (receivedID == keyID) {
            continue;
        }
        vector<string> pplTravel = data[receivedID];
        for (string& city : keyTravel) {
            if (find(pplTravel.begin(), pplTravel.end(), city) != pplTravel.end()
            && find(result.begin(), result.end(), receivedID) == result.end()) {
                result.push_back(receivedID);
            }
        }
    }
    if (result.empty()) {
        cout << ">> Not Found";
        return 0;
    }
    for (auto i = 0; i < result.size(); ++i) {
        cout << ">> " << result[i] << endl;
    }
    return 0;
}