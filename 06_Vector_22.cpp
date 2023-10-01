#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> v;
    while (cin >> n)
    {
        v.push_back(n);
    }
    vector<pair<int, pair<int, int> > > result, emer;
    int temp = v[0];
    int start = 0, stop = 0, maxRange = 0;
    for (size_t i = 0; i < v.size(); ++i)
    {
        if (stop == (int)v.size() - 1)
        {
            break;
        }
        start = i;
        stop = i;
        for (size_t j = i + 1; j < v.size(); ++j)
        {
            if (v[i] != temp || i == 0) {
                if (v[i] == v[j])
                {
                    stop = j;
                    if (j == v.size() - 1) {
                        result.push_back(make_pair(v[i], make_pair(start, stop+1)));
                        maxRange = stop - start;
                        break;
                    }
                }
                else
                {
                    emer.push_back(make_pair(v[i], make_pair(start, stop + 1)));
                    if (stop + 2 == (int)v.size())
                    {
                        emer.push_back(make_pair(v[i+1], make_pair(start+1, stop + 2)));
                    }
                    if (maxRange <= (stop - start) && stop != start)
                    {
                        result.push_back(make_pair(v[i], make_pair(start,stop+1)));
                        maxRange = stop - start;
                        temp = v[i];
                        break;
                    }
                    else {
                        temp = v[i];
                        break;
                    }
                }
            }
        }
    }
    for (size_t i = 0; i < result.size(); ++i) {
        for (size_t j = i+1; j < result.size(); ++j) {
            if (result[i].first > result[j].first) {
                swap(result[i],result[j]);
            }
        }
    }
    if (result.size() == 0) {
        for (size_t i = 0; i < emer.size(); ++i)
        {
            for (size_t j = i + 1; j < emer.size(); ++j)
            {
                if (emer[i].first > emer[j].first)
                {
                    swap(emer[i], emer[j]);
                }
            }
        }
        for (size_t i = 0; i < emer.size(); ++i) {
            cout << emer[i].first << " --> x[ " << emer[i].second.first << " : " << emer[i].second.second << " ]\n";
        }
    } else {
        for (size_t i = 0; i < result.size(); ++i) {
            cout << result[i].first << " --> x[ " << result[i].second.first << " : " << result[i].second.second << " ]\n";
        }
    }

}