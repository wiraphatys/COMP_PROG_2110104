#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> winCount;
    vector<vector<string> > result;
    for (int i = 0; i < n; ++i) {
        int winA = 0, winB = 0;
        vector<string> A, B;
        string teamA, teamB, rawScore;
        cin >> teamA >> teamB;

        A.push_back(teamA);
        B.push_back(teamB);

        if (winCount.find(teamA) == winCount.end()) {
            winCount[teamA] = 0;
        }
        if (winCount.find(teamA) == winCount.end()) {
            winCount[teamB] = 0;
        }
        while (cin >> rawScore) {
            if (rawScore == "*") {
                break;
            }
            int index = rawScore.find('-');
            int scoreA = stoi(rawScore.substr(0, index));
            int scoreB = stoi(rawScore.substr(index + 1));

            A.push_back(to_string(scoreA));
            B.push_back(to_string(scoreB));

            if (scoreA > scoreB) {
                winA++;
            }
            else if (scoreA < scoreB) {
                winB++;
            }
        }
        A.push_back(to_string(winA));
        B.push_back(to_string(winB));
        if (winA > winB) {
            A[0] = '*' + A[0];
        } else if (winA < winB) {
            B[0] = '*' + B[0];
        }
        result.push_back(A);
        result.push_back(B);
    }
    for (auto& v : result) {
        cout << v[0] << ' ' << v[v.size() - 1] << " [ ";
        for (int i = 1; i < v.size() - 1; ++i) {
            cout << v[i] << ' ';
        }
        cout << "]" << endl;
    }
    return 0;
}
