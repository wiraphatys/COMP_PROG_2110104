#include <iostream>
using namespace std;

int main()
{
    // input stage
    int number;
    cin >> number;

    // processing stage
    if (number > 0)
    {
        cout << "positive" << endl;
    }
    else if (number < 0)
    {
        cout << "negative" << endl;
    }
    else if (number == 0)
    {
        cout << "zero" << endl;
    }

    if (number % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
}