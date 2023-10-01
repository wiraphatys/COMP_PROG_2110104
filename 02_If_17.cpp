#include <iostream>
using namespace std;

int main()
{
    // input
    int weight;
    cin >> weight;

    // processing
    if (weight <= 100)
    {
        cout << 18 << endl;
    }
    else if (weight <= 250)
    {
        cout << 22 << endl;
    }
    else if (weight <= 500)
    {
        cout << 28 << endl;
    }
    else if (weight <= 1000)
    {
        cout << 38 << endl;
    }
    else if (weight <= 2000)
    {
        cout << 58 << endl;
    }
    else
    {
        cout << "Reject" << endl;
    }
}