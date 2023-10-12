#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    vector<vector<short int> > result;
    vector<short int> input;
    short int num;
    while (cin >> num) {
        input.push_back(num);
    }

    vector<short int> temp;
    temp.push_back(input[0]);
    result.push_back(temp);

    if (str == "first") {
        for (size_t i = 1; i < input.size(); ++i) {
            bool found = false;
            for (auto& v : result) {
                short int sum = 0;
                for (auto& item : v) {
                    sum += item;
                }
                sum += input[i];
                if (sum <= 100) {
                    v.push_back(input[i]);
                    found = true;
                    break;
                }
            }
            if (!found) {
                temp.clear();
                temp.push_back(input[i]);
                result.push_back(temp);
            }
        }
    } else if (str == "best") {
        for (size_t i = 1; i < input.size(); ++i) {
            bool found = false;
            vector<short int> selector;
            for(auto& v : result) {
                short int sum = 0;
                for(auto& item : v) {
                    sum += item;
                }
                sum += input[i];
                if (sum <= 100) {
                    selector.push_back(100 - sum);
                    found = true;
                } else {
                    selector.push_back(sum);
                }
            }
            if (found) {
                short int minIndex = 0;
                short int minVal = selector[0];
                for (size_t j = 1; j < selector.size(); ++j) {
                    if (selector[j] < minVal) {
                        minVal = selector[j];
                        minIndex = j;
                    }
                }
                result[minIndex].push_back(input[i]);
            } else {
                temp.clear();
                temp.push_back(input[i]);
                result.push_back(temp);
            }
        }
    }

    for (auto& v : result) {
        sort(v.begin(), v.end());
        short int sum = 0;
        for (auto& n : v) {
            sum -= n;
        }
        short int size = v.size();
        v.insert(v.begin(),size);
        v.insert(v.begin(), sum);
    }

    sort(result.begin(), result.end());
    for (auto& v : result) {
        for (size_t i = 2; i < v.size(); ++i) {
            cout << v[i];
            if (i + 1 != v.size()) {
                cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}