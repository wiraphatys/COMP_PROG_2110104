#include <iostream>
#include <string>

using namespace std;

string convertLessThanThousand(int num)
{
    const string units[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    const string teens[] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    const string tens[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    string result;

    if (num >= 100)
    {
        result += units[num / 100] + " hundred";
        if (num % 100 != 0)
        {
            result += " ";
        }
        num %= 100;
    }

    if (num >= 20)
    {
        result += tens[num / 10];
        if (num % 10 != 0)
        {
            result += " " + units[num % 10];
        }
    }
    else if (num >= 11)
    {
        result += teens[num - 10];
    }
    else if (num >= 1)
    {
        result += units[num];
    }

    return result;
}

string numberToWords(long long num)
{
    if (num == 0)
    {
        return "zero";
    }

    const string thousands[] = {"", "thousand", "million", "billion", "trillion"};

    string result;
    int chunkCount = 0;

    while (num > 0)
    {
        int chunk = num % 1000;
        if (chunk > 0)
        {
            if (!result.empty())
            {
                result = convertLessThanThousand(chunk) + " " + thousands[chunkCount] + " " + result;
            }
            else
            {
                result = convertLessThanThousand(chunk) + " " + thousands[chunkCount];
            }
        }
        num /= 1000;
        chunkCount++;
    }

    return result;
}

int main()
{
    long long number;
    cin >> number;

    if (number < 0 || number > 999999999999999LL)
    {
        cout << "Input is out of range.\n";
    }
    else
    {
        string words = numberToWords(number);
        cout << words << "\n";
    }

    return 0;
}
