#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    getline(cin, x);
    int charCount[26] = {0};
    for (char &c : x)
    {
        c = tolower(c);
    }
    for (char c : x)
    {
        if ('a' <= c && c <= 'z')
        {
            charCount[c - 'a']++;
        }
    }
    for (size_t i = 0; i < 26; i++)
    {
        if (charCount[i] != 0)
        {

            cout << char(i + 97) << " -> " << charCount[i] << endl;
        }
    }
    return 0;
}