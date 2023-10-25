#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    double grade[N], weight[N];
    string g;
    double w;
    for (int i = 0; i < N; i++)
    {
        cin >> g;
        if (g == "A")
        {
            grade[i] = 4.0;
        }
        else if (g == "B+")
        {
            grade[i] = 3.5;
        }
        else if (g == "B")
        {
            grade[i] = 3.0;
        }
        else if (g == "C+")
        {
            grade[i] = 2.5;
        }
        else if (g == "C")
        {
            grade[i] = 2.0;
        }
        else if (g == "D+")
        {
            grade[i] = 1.5;
        }
        else if (g == "D")
        {
            grade[i] = 1.0;
        }
        else if (g == "F")
        {
            grade[i] = 0;
        }
        cin >> w;
        weight[i] = w;
    }

    double upper = 0, lower = 0;
    for (int i = 0; i < N; i++)
    {
        upper += grade[i] * weight[i];
        lower += weight[i];
    }
    double GPA = upper / lower;

    cout << round(GPA * 100) / 100;
    return 0;
}