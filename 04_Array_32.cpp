#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // ลิฟต์ตัวที่ , อยู่ชั้นที่ , กำลังจะไปชั้นที่
    int lift[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> lift[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (lift[i][0] < lift[j][0])
            {
                swap(lift[i], lift[j]);
            }
        }
    }

    int m;
    cin >> m;

    // เราอยู่ชั้นที่ , อยากไปชั้นที่
    int pas[m][2];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> pas[i][j];
        }
    }
    int energy[n];
    bool liftDir = true, pasDir = true;
    for (int person = 0; person < m; person++)
    {
        for (int k = 0; k < n; k++)
        {
            energy[k] = 0;
        }
        pasDir = (pas[person][0] > pas[person][1]) ? false : true;
        for (int i = 0; i < n; i++)
        {
            liftDir = (lift[i][1] > lift[i][2]) ? false : true;

            if (liftDir == pasDir)
            {
                if (min(lift[i][1], lift[i][2]) <= pas[person][0] && pas[person][0] <= max(lift[i][1], lift[i][2]))
                {
                    if (min(lift[i][1], lift[i][2]) <= pas[person][1] && pas[person][1] <= max(lift[i][1], lift[i][2]))
                    {
                        // อยู่ใน => จบใน
                        energy[i] += 0;
                    }
                    else
                    {
                        // อยู่ใน => จบนอก
                        energy[i] += abs(lift[i][2] - pas[person][1]);
                    }
                }
                else
                {
                    energy[i] += abs(lift[i][2] - pas[person][0]) + abs(pas[person][0] - pas[person][1]);
                }
            }
            else
            {
                // คนละ dir || อยู่นอก (จบนอก หรือใน ก็ได้)
                energy[i] += abs(lift[i][2] - pas[person][0]) + abs(pas[person][0] - pas[person][1]);
            }
        }
        for (int x = 0; x < n; x++)
        {
            if (energy[x] == *min_element(energy, energy + n))
            {
                cout << ">> " << lift[x][0] << "\n";
                break;
            }
        }
    }
}