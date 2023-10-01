#include <iostream>
using namespace std;

int main()
{
    string myLine;
    while (getline(cin, myLine))
    {
        bool isUpper = false, isLower = false, isNum = false, isDigit = false;

        if (myLine.size() == 0)
        {
            break;
        }
        if (myLine.size() < 8)
        {
            cout << ">> invalid" << endl;
        }
        else if (myLine.size() >= 12)
        {
            for (size_t i = 0; i < myLine.size(); i++)
            {
                if (65 <= myLine[i] && myLine[i] <= 90)
                {
                    isUpper = true;
                }
                if (97 <= myLine[i] && myLine[i] <= 122)
                {
                    isLower = true;
                }
                if (48 <= myLine[i] && myLine[i] <= 57)
                {
                    isNum = true;
                }
                if ((32 <= myLine[i] && myLine[i] <= 47) || (58 <= myLine[i] && myLine[i] <= 64) || (92 <= myLine[i] && myLine[i] <= 96) || (123 <= myLine[i] && myLine[i] <= 126))
                {
                    isDigit = true;
                }
            }
            if (isUpper && isLower && isNum && isDigit)
            {
                cout << ">> strong" << endl;
            }
            else if (isUpper && isLower && isNum)
            {
                cout << ">> weak" << endl;
            }
            else
            {
                cout << ">> invalid" << endl;
            }
        }
        else if (myLine.size() >= 8)
        {
            for (size_t i = 0; i < myLine.size(); i++)
            {
                if (65 <= myLine[i] && myLine[i] <= 90)
                {
                    isUpper = true;
                }
                if (97 <= myLine[i] && myLine[i] <= 122)
                {
                    isLower = true;
                }
                if (48 <= myLine[i] && myLine[i] <= 57)
                {
                    isNum = true;
                }
            }
            if (isUpper && isLower && isNum)
            {
                cout << ">> weak" << endl;
            }
            else
            {
                cout << ">> invalid" << endl;
            }
        }
    }
}