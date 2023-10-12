#include <iostream>
#include <string>
using namespace std;

int main()
{
    string answer, key;
    int count = 0, N;
    getline(cin, answer);
    getline(cin, key);

    if (answer.size() == key.size())
    {
        N = answer.size();

        for (int i = 0; i < N; i++)
        {
            if (answer[i] == key[i])
            {
                count++;
            }
        }

        cout << count;
    }
    else
    {
        cout << "Incomplete answer";
    }
}