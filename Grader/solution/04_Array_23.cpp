#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string country[n];
    int fee[n];
    for (int i = 0; i < n; i++)
    {
        cin >> country[i] >> fee[i];
    }
    cin.ignore();
    string x;
    getline(cin, x);
    int k = (x.size() + 1) / 7;
    string travel[k];
    for (size_t i = 4, j = 0; i < x.size(); i += 7, j++)
    {
        travel[j] = x.substr(i, 2);
    }

    int total = 0;
    for (int i = 0; i < k; i++)
    {
        // to checking i not out of range
        if (i < k - 1)
        {
            // travel[0] = "TH";
            if (travel[i] != travel[i + 1])
            {
                int index;
                for (int j = 0; j < n; j++)
                {
                    if (country[j] == travel[i + 1])
                    {
                        index = j;
                    }
                }
                total += fee[index];
            }
        }
    }
    cout << total;
}

// an = 6 + (n-1)7
// an = 6 + 7n - 7
// an = 7n - 1
// n = (an + 1) / 7