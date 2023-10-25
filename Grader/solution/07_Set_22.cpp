#include <bits/stdc++.h>
using namespace std;

set<int> setUnion(const set<int> &A, const set<int> &B) {
    set<int> result = A;
    for (int num : B) {
        result.insert(num);
    }
    return result;
}

set<int> setIntersection(const set<int> &A, const set<int> &B) {
    set<int> result;
    for (int num : A) {
        if (B.count(num) > 0) {
            result.insert(num);
        }
    }
    return result;
}

set<int> setDifference(const set<int> &A, const set<int> &B) {
    set<int> result;
    for (int num : A) {
        if (B.count(num) == 0) {
            result.insert(num);
        }
    }
    return result;
}

int main() {
    set<int> A, B, U, I, D;
    string input;

    getline(cin, input);
    istringstream iss(input);
    int num;
    while (iss >> num) {
        A.insert(num);
    }

    getline(cin, input);
    istringstream iss2(input);
    while (iss2 >> num) {
        B.insert(num);
    }

    U = setUnion(A, B);
    I = setIntersection(A, B);
    D = setDifference(A, B);

    while (getline(cin, input)) {
        istringstream iss(input);
        B.clear();
        while (iss >> num)
        {
            B.insert(num);
        }
        U = setUnion(U, B);
        I = setIntersection(I, B);
        D = setDifference(D, B);
    }

    cout << "U: ";
    for (int num : U) {
        cout << num << ' ';
    }
    cout << endl;

    cout << "I: ";
    for (int num : I) {
        cout << num << ' ';
    }
    cout << endl;

    cout << "D: ";
    for (int num : D) {
        cout << num << ' ';
    }
    cout << endl;

    return 0;
}