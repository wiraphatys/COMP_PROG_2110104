#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double xe, ye, re, rp, xm, ym;
    // (xe,ye) => ศูนย์กลางวงกลม
    // (xm,ym) => จุด pointer
    // re => รัศมีลูกตา
    // rp => รัศมีบอล
    cin >> xe >> ye >> re >> rp >> xm >> ym;

    // a,b => อัตราส่วน ; a ส่วนใน / b นอก
    double a, b, all;
    a = abs(re - rp);
    all = sqrt(pow(xe - xm, 2) + pow(ye - ym, 2));
    b = all - a;

    // calculating
    double xp, yp;
    xp = (xe * b + xm * a) / (a + b);
    yp = (ye * b + ym * a) / (a + b);

    // display
    cout << round(xp) << ' ' << round(yp);

    return 0;
}