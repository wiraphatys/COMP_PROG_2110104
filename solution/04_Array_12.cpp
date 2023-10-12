#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[10] = {"Robert",
                       "William",
                       "James",
                       "John",
                       "Margaret",
                       "Edward",
                       "Sarah",
                       "Andrew",
                       "Anthony",
                       "Deborah"};
    string nick[10] = {"Dick",
                       "Bill",
                       "Jim",
                       "Jack",
                       "Peggy",
                       "Ed",
                       "Sally",
                       "Andy",
                       "Tony",
                       "Debbie"};
    int n, count = 0, notFound = 0;
    cin >> n;
    string key, result[n];
    for (int line = 0; line < n; line++)
    {
        cin >> key;
        for (size_t i = 0; i < 10; i++)
        {
            if (key == name[i])
            {
                result[count] = nick[i];
                count++;
            }
            else if (key == nick[i])
            {
                result[count] = name[i];
                count++;
            }
            else
            {
                notFound++;
            }
        }
        if (notFound == 10)
        {
            result[count] = "Not found";
            count++;
        }
        notFound = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}