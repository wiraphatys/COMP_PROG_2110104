#include <bits/stdc++.h>
using namespace std;

// Function to perform union of two sets
set<int> setUnion(const set<int> &A, const set<int> &B)
{
    set<int> result = A;
    for (int num : B)
    {
        result.insert(num);
    }
    return result;
}

// Function to perform intersection of two sets
set<int> setIntersection(const set<int> &A, const set<int> &B)
{
    set<int> result;
    for (int num : A)
    {
        if (B.count(num) > 0)
        {
            result.insert(num);
        }
    }
    return result;
}

// Function to perform difference of two sets (A - B)
set<int> setDifference(const set<int> &A, const set<int> &B)
{
    set<int> result;
    for (int num : A)
    {
        if (B.count(num) == 0)
        {
            result.insert(num);
        }
    }
    return result;
}

int main()
{
    set<int> A, B, U, I, D;
    string input;

    // Input and operations for set A
    getline(cin, input);
    istringstream iss(input);
    int num;
    while (iss >> num)
    {
        A.insert(num);
    }

    // Input and operations for set B
    getline(cin, input);
    istringstream iss2(input);
    while (iss2 >> num)
    {
        B.insert(num);
    }

    // Calculate initial union, intersection, and difference
    U = setUnion(A, B);
    I = setIntersection(A, B);
    D = setDifference(A, B);

    // Process additional input sets
    while (getline(cin, input))
    {
        istringstream iss(input);
        B.clear(); // Clear set B for each new input set
        while (iss >> num)
        {
            B.insert(num);
        }
        U = setUnion(U, B);
        I = setIntersection(I, B);
        D = setDifference(D, B);
    }

    // Output results
    cout << "U: ";
    for (int num : U)
    {
        cout << num << ' ';
    }
    cout << endl;

    cout << "I: ";
    for (int num : I)
    {
        cout << num << ' ';
    }
    cout << endl;

    cout << "D: ";
    for (int num : D)
    {
        cout << num << ' ';
    }
    cout << endl;

    return 0;
}