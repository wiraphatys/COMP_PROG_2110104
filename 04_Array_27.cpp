#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int left[n];
    int right[n];

    // for (int i=0; i<n; i++){
    //     if (i%2==0) cin >> left[i] >> right[i];
    //     else cin >> right[i] >> left[i];
    // }

    int count_left = 0, count_right = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        if ((i + 1) % 4 == 0 || i % 4 == 0)
        {
            cin >> left[count_left];
            count_left++;
        }
        else
        {
            cin >> right[count_right];
            count_right++;
        }
    }

    string key;
    cin >> key;

    sort(left, left + n);
    sort(right, right + n);

    if (key == "Zig-Zag")
    {
        cout << left[0] << ' ' << right[n - 1];
    }
    else if (key == "Zag-Zig")
    {
        cout << right[0] << ' ' << left[n - 1];
    }
    // cout << "left" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << left[i] << " "; // Print each element of the sorted array
    // }
    // cout << "\nright" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << right[i] << " "; // Print each element of the sorted array
    // }
    return 0;
}