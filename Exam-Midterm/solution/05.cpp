#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int start[n];
    int stop[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> start[i] >> stop[i];
    }
    int max_overlap = 0;
    for (int i = 0; i < 1440; ++i)
    {
        int overlap = 0;
        for (int j = 0; j < n; ++j)
        {
            if (start[j] <= i + 1 && i + 1 < stop[j])
                overlap++;
        }
        if (overlap > max_overlap)
            max_overlap = overlap;
    }
    cout << max_overlap << endl;

    return 0;
}
