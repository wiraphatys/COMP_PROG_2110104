#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    getline(cin, x);

    int nums[10] = {0};
    int count = 0;
    int state = 0;
    for (size_t i = 0; i < x.size(); i++)
    {
        if ('0' <= x[i] && x[i] <= '9')
        {
            int digit = x[i] - '0';
            nums[digit] = 1;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (nums[i] == 1)
        {
            state++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (state != 10)
        {
            if (nums[i] == 0)
            {
                if (count == 0)
                {
                    cout << i;
                    count++;
                }
                else
                {
                    cout << ',' << i;
                    count++;
                }
            }
        }
    }

    if (state == 10)
    {
        cout << "None";
    }
    return 0;
}