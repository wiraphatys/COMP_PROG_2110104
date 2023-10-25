#include <bits/stdc++.h>
using namespace std;

vector<string> split(string line, char delimiter)
{
    vector<string> v;
    string temp = "";
    for (auto i = 0; i < line.size(); i++)
    {
        if (line[i] != delimiter)
        {
            temp += line[i];
            if (i + 1 == (int)line.size())
            {
                v.push_back(temp);
            }
        }
        else
        {
            if (temp == "")
            {
                continue;
            }
            else
            {
                v.push_back(temp);
                temp = "";
            }
        }
    }
    return v;
}

int main()
{
    string line;
    getline(cin, line);
    string delim;
    getline(cin, delim);
    for (string e : split(line, delim[0]))
    {
        cout << '(' << e << ')';
    }
    return 0;
}