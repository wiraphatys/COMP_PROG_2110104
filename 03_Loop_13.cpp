#include <iostream>
#include <string>
using namespace std;

int main()
{
    string key, sentence;
    int count = 0;

    getline(cin, key);
    getline(cin, sentence);

    while (true)
    {
        int index = sentence.find(key);

        // not found
        if (index == -1)
        {
            break;
        }

        char after = sentence[index + key.size()];
        char before = sentence[index - 1];

        if (after == '"' || after == '(' || after == ')' || after == ',' || after == '.' || after == 39 || after == '/' || after == ' ' || (index + key.size()) == sentence.size())
        {
            if (before == '"' || before == '(' || before == ')' || before == ',' || before == '.' || before == 39 || before == '/' || before == ' ' || index == 0)
            {
                count++;
            }
        }

        sentence[index] = key[0] + 1;
    }

    cout << count;

    return 0;
}