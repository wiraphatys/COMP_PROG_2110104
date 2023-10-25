#include <bits/stdc++.h>
using namespace std;

map<char, string> T2K = {
    {'a', "2"}, {'b', "22"}, {'c', "222"}, {'d', "3"}, {'e', "33"}, {'f', "333"}, {'g', "4"}, {'h', "44"}, {'i', "444"}, {'j', "5"}, {'k', "55"}, {'l', "555"}, {'m', "6"}, {'n', "66"}, {'o', "666"}, {'p', "7"}, {'q', "77"}, {'r', "777"}, {'s', "7777"}, {'t', "8"}, {'u', "88"}, {'v', "888"}, {'w', "9"}, {'x', "99"}, {'y', "999"}, {'z', "9999"}, {' ', "0"}};
map<string, char> K2T;

string text2keys(string text)
{
    string keys = "";
    for (char c : text)
    {
        c = c | 0x20;
        if (T2K.find(c) != T2K.end())
        {
            keys += T2K[c];
            keys += " ";
        }
    }
    return keys.substr(0, keys.size() - 1);
}
string keys2text(string keys)
{
    stringstream ss(keys);
    string x;
    string text = "";
    while (ss >> x)
    {
        text += K2T[x];
    }
    return text;
}

int main()
{
    for (auto &p : T2K)
    {
        K2T[p.second] = p.first;
    }
    string line;
    while (getline(cin, line))
    {
        string cmd = line.substr(0, 3);
        string t = line.substr(4, string::npos);
        if (cmd == "K2T")
            cout << ">> " + keys2text(t) << endl;
        else
            cout << ">> " + text2keys(t) << endl;
    }
    return 0;
}
