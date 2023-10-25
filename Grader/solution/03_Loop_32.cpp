#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string temp;
    getline(cin, temp);
    while (N--)
    {
        string x, balls, balls1, balls2;
        getline(cin, x);
        for (auto c : x)
        {
            if (c != ' ')
            {
                balls += c;
                if (balls.size() % 2 == 0)
                    balls1 += c;
                else
                    balls2 += c;
            }
        }
        int score = 0;
        string colors = "RYGNBPK";
        for (auto c : balls)
        {
            score += 1 + colors.find(c);
        }
        string WRONG = "WRONG_INPUT";
        if (balls[0] != 'R')
            cout << WRONG;
        else if (balls1.find('R') != string::npos)
            cout << WRONG;
        else if (balls2 == string(balls2.size(), 'R'))
            cout << score;
        else
        {
            int k = 0, m = balls.size();
            for (; k < m; k += 2)
                if (balls[k] != 'R')
                    break;
            // R ? X
            if (balls.substr(k, m - k) == colors.substr(1, m - k))
                cout << score;
            else
                cout << WRONG;
        }
        cout << endl;
    }
    return 0;
}
