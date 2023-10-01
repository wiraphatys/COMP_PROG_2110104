#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, key = -1;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n * n; i++)
    {
        int num;
        cin >> num;
        if (num != 0)
        {
            vec.push_back(num);
        }
        else
        {
            key = i / n;
        }
    }

    // for (size_t i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i] << ' ';
    // }

    int inversion = 0;
    for (size_t i = 0; i < vec.size(); i++)
    {
        for (size_t j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] > vec[j])
            {
                inversion++;
            }
        }
    }

    if (n % 2 == 0)
    {
        if (inversion % 2 == 0)
        {
            if (key % 2 != 0)
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        }
        else
        {
            if (key % 2 == 0)
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        }
    }
    else
    {
        if (inversion % 2 == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}