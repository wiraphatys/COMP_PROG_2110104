#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;
    if (n == "01" || n == "02" || n == "20" || n == "21" || n == "22" || n == "23" || n == "24" || n == "25" || n == "26" || n == "27" || n == "28" || n == "29" || n == "30" || n == "31" || n == "32" || n == "33" || n == "34" || n == "35" || n == "36" || n == "37" || n == "38" || n == "39" || n == "40" || n == "51" || n == "53" || n == "58" || n == "55")
        cout << "OK";
    else
        cout << "Error";
    return 0;
}