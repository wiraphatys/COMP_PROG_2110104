#include <iostream>
using namespace std;

int largest(int arr[], int n)
{
    int pos = 0;
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
        {
            max = arr[i];
            pos = i;
        }
    return pos;
}

int main()
{
    int N;
    cin >> N;

    int Arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> Arr[i];
    }

    int leftMax[N];
    int left = Arr[0];

    for (int i = 0; i < N; i++)
    {
        leftMax[i] = left;
        left = max(left, Arr[i]);
    }

    int water = 0;
    int rightMax = Arr[N - 1];
    int index_max = largest(Arr, N);

    for (int i = N - 1; i > index_max; i--)
    {
        rightMax = max(rightMax, Arr[i]);
        water += min(leftMax[i], rightMax) - Arr[i];
    }

    cout << water;
}