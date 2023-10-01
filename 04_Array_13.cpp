#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    double Num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Num[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (i != 0 && i != (n - 1))
        {
            if (Num[i] > Num[i - 1] && Num[i] > Num[i + 1])
            {
                count++;
            }
        }
    }
    cout << count;
}
