#include <iostream>
#include <string>
using namespace std;

int main()
{
    string id_A, id_B;
    float grade_A, grade_B;
    string comp_prog_A, comp_prog_B, cal1_A, cal1_B, cal2_A, cal2_B, status_A, status_B;
    cin >> id_A >> grade_A >> comp_prog_A >> cal1_A >> cal2_A;
    cin >> id_B >> grade_B >> comp_prog_B >> cal1_B >> cal2_B;

    // checking A is pass or not ?
    if ((comp_prog_A == "A") && (cal1_A == "A" || cal1_A == "B" || cal1_A == "C") && (cal2_A == "A" || cal2_A == "B" || cal2_A == "C"))
    {
        status_A = "pass";
    }
    else
    {
        status_A = "reject";
    }

    // checking B is pass or not ?
    if ((comp_prog_B == "A") && (cal1_B == "A" || cal1_B == "B" || cal1_B == "C") && (cal2_B == "A" || cal2_B == "B" || cal2_B == "C"))
    {
        status_B = "pass";
    }
    else
    {
        status_B = "reject";
    }

    // grade comparision
    if (status_A == "pass" && status_B == "pass")
    {
        if (grade_A > grade_B)
        {
            cout << id_A;
        }
        else if (grade_A < grade_B)
        {
            cout << id_B;
        }
        else if (grade_A == grade_B)
        {
            if (cal1_A < cal1_B)
            {
                cout << id_A;
            }
            else if (cal1_A > cal1_B)
            {
                cout << id_B;
            }
            else if (cal1_A == cal1_B)
            {
                if (cal2_A < cal2_B)
                {
                    cout << id_A;
                }
                else if (cal2_A > cal2_B)
                {
                    cout << id_B;
                }
                else if (cal2_A == cal2_B)
                {
                    cout << "Both";
                }
            }
        }
    }
    else if (status_A == "pass" && status_B == "reject")
    {
        cout << id_A;
    }
    else if (status_A == "reject" && status_B == "pass")
    {
        cout << id_B;
    }
    else if (status_A == "reject" && status_B == "reject")
    {
        cout << "None";
    }
    return 0;
}