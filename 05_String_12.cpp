#include <iostream>
#include <string>
#include <vector>
using namespace std;

string addStrings(string num1, string num2)
{
    string result;
    int carry = 0;

    int i = num1.length() - 1;
    int j = num2.length() - 1;

    while (i >= 0 || j >= 0 || carry)
    {
        int digit1 = (i >= 0) ? (num1[i] - '0') : 0;
        int digit2 = (j >= 0) ? (num2[j] - '0') : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        sum %= 10;

        result = to_string(sum) + result;

        i--;
        j--;
    }

    return result;
}

int main()
{
    vector<string> numbers;
    string input;

    while (true)
    {
        cin >> input;

        if (input == "END")
            break;

        numbers.push_back(input);
    }

    string sum = "0";

    for (const string &num : numbers)
    {
        sum = addStrings(sum, num);
    }

    cout << sum << endl;

    return 0;
}
