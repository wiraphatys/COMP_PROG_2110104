#include <iostream>
#include <cmath>
#include <string>
using namespace std;

long gcd(long a, long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    // a = หน้าทศนิยม
    // b = ไม่ซ้ำ
    // c = เลขซ้ำ
    int a;
    string b, c;
    cin >> a >> b >> c;

    int upper, lower, extra, totalUpper;
    upper = (stoi(b + c) - stoi(b));
    lower = (pow(10, (b + c).size())) - (pow(10, (b).size()));
    extra = a * lower;
    totalUpper = upper + extra;

    // gcd
    int g = gcd(totalUpper, lower);

    // display
    cout << totalUpper / g << " / " << lower / g;
}