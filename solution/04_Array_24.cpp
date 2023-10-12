#include <iostream>
using namespace std;

int flip(int arr[], int i)
{
    int start = 0;
    while (start < i)
    {
        int temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;
        start += 1;
        i -= 1;
    }
    return 0;
}

int findMax(int arr[], int n)
{
    int mi = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[mi])
        {
            mi = i;
        }
    }
    return mi;
}

int printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            cout << arr[i];
        }
        else
        {
            cout << arr[i] << ' ';
        }
    }
    cout << endl;
    return 0;
}

int pancakeSort(int arr[], int n)
{
    int curr_size = n;
    while (curr_size > 1)
    {
        int mi = findMax(arr, curr_size);

        if (mi != curr_size - 1)
        {
            flip(arr, mi);
            if (mi != 0)
            {
                printArray(arr, n);
            }
            flip(arr, curr_size - 1);
            printArray(arr, n);
            mi = curr_size - 1;
        }
        curr_size -= 1;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    printArray(arr, n);
    pancakeSort(arr, n);
    return 0;
}