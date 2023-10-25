#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // (x1,y1),(x2,y2)
    int arr[n][4];
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    vector<int> v;
    int maxVal = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int max_lower = max(arr[i][1], arr[j][1]);
            int min_upper = min(arr[i][3], arr[j][3]);
            int max_left = max(arr[i][0], arr[j][0]);
            int min_right = min(arr[i][2], arr[j][2]);
            int x = abs(min_right - max_left);
            int y = abs(min_upper - max_lower);
            if (min_right > max_left && min_upper > max_lower)
            {
                if ((x * y) > maxVal)
                {
                    maxVal = x * y;
                }
                v.push_back(i);
                v.push_back(j);
                v.push_back(x * y);
            }
        }
    }
    if (maxVal != 0)
    {
        cout << "Max overlapping area = " << maxVal << endl;
        for (size_t i = 0; i < v.size(); i += 3)
        {
            if (maxVal == v[i + 2])
            {
                cout << "rectangles " << v[i] << " and " << v[i + 1] << endl;
            }
        }
    }
    else
    {
        cout << "No overlaps" << endl;
    }
    return 0;
}