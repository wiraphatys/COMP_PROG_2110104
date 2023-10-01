#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
        {
            str[i] = '[';
        }
        else if (str[i] == '[')
        {
            str[i] = '(';
        }
        else if (str[i] == ')')
        {
            str[i] = ']';
        }
        else if (str[i] == ']')
        {
            str[i] = ')';
        }
    }

    cout << str;
}