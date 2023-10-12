#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // true = append item into last index on vector
    // false = append item into first index on vector
    bool state = true;
    vector<int> A;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        if (state)
        {
            A.push_back(x);
        }
        else
        {
            A.insert(A.begin(), x);
        }
        state = !state;
    }

    int element;
    while (cin >> element)
    {
        if (element != -1)
        {
            if (state)
            {
                A.push_back(element);
            }
            else
            {
                A.insert(A.begin(), element);
            }
            state = !state;
        }
        else
        {
            break;
        }
    }

    int mySize = A.size(), c = 0;
    cout << '[';
    for (int i = 0; i < mySize; i++)
    {
        if (c < mySize - 1)
        {
            cout << A[i] << ", ";
            c++;
        }
        else
        {
            cout << A[i];
        }
    }
    cout << ']';
    return 0;
}