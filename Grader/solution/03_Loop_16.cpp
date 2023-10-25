#include <iostream>
using namespace std;

int main()
{
    int num, left, right, base;
    cin >> num;

    left = num;
    right = num;
    base = 2 * num - 1;

    for (int i = num; i < base; i++)
    {
        string j(i, '.');
        j[left - 1] = '*';
        j[right - 1] = '*';
        left--;
        right++;
        cout << j << endl;
    }
    while (base--)
        cout << "*";
}