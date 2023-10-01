#include <iostream>
#include <string>
using namespace std;

int main()
{
    char key;
    string t, result;
    int k, count = 1;
    cin >> t >> k;

    for (size_t i = 0; i < t.size(); i++)
    {
        key = t[i];
        for (size_t j = 0; j < t.size(); j++)
        {
            if (t[j] == key)
            {
                if (t[j] == t[j + 1])
                {
                    count++;
                }
            }
            if (count < k)
            {
                result += t.substr(j - count + 1, count);
            }
        }
    }
    
    cout << result;
}