#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int F(int n) { // Fibonacci number
    if (n == 0) return 0;
    if (n == 1) return 1;
    return F(n-1) + F(n-2);
}
int M(int n) { // Motzkin number
    int result = 0;
    if (n == 0 || n == 1) return 1;
    for (int k = 0; k <= n-2; ++k) {
        result += M(k) * M(n-2-k);
    }
    return M(n-1) + result;
}
int S(int n) { // Schröder–Hipparchus Number
    if (n == 1 || n == 2) return 1;
    return (1.0 / n) * (((6*n) - 9) * S(n - 1) - (n - 3) * S(n - 2));
}
int D(int n) { // Derangement
    if (n == 0) return 1;
    return n * D(n-1) + pow(-1, n);
}

int main() {
    map<string, int (*)(int)> func = {{"F", F}, {"M", M}, {"S", S}, {"D", D}};
    string fn;
    int p;
    while (cin >> fn >> p) {
        if (func.find(fn) != func.end())
            cout << fn << '(' << p << ") = " << func[fn](p) << endl;
    }
    return 0;
}