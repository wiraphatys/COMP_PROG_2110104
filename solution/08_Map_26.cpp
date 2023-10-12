#include <bits/stdc++.h>
using namespace std;

int main(){ 
    string input;
    vector<string> receivedInput;
    set<string> result, temp;
    while(cin >> input) {
        receivedInput.push_back(input);
    }
    string key = receivedInput[receivedInput.size() - 1];
    for (size_t i = 0; i < receivedInput.size(); ++i) {
        if (key == receivedInput[i] && i % 2 == 0) {
            if (i != receivedInput.size() - 1){
                result.insert(receivedInput[i+1]);
            }
        } else if (key == receivedInput[i] && i % 2 != 0) {
            result.insert(receivedInput[i-1]);
        }
    }
    temp = result;
    for (size_t i = 0; i < receivedInput.size(); ++i) {
        if (temp.find(receivedInput[i]) != temp.end() && i % 2 == 0){
            if (i != receivedInput.size() - 1) {
            result.insert(receivedInput[i+1]);
            }
        } else if (temp.find(receivedInput[i]) != temp.end() && i % 2 != 0) {
            result.insert(receivedInput[i-1]);
        }
    }
    result.insert(key);
    for (auto itr = result.begin(); itr != result.end(); ++itr) {
        cout << *itr << endl;
    }
    return 0;
}