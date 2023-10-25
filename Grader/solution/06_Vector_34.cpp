#include <bits/stdc++.h>
using namespace std;

int main() {
    int line, n, call_n, t1, t2;
    string x, y;
    cin >> line;
    cin >> x >> n;
    call_n = n;
    vector<double> QueueTime;
    // map store ticketQueue, startingTime;
    map<int, int> keyTime;
    for(auto i = 0; i < line - 1; ++i) {
        cin >> x;
        if (x == "new") {
            cin >> t1;
            cout << ">> ticket " << n << endl;
            keyTime[n] = t1;
            n++; 
        } else if (x == "next") {
            cout << ">> call " << call_n << endl;
            call_n++;
        } else if (x == "order") {
            cin >> t2;
            int startingPoint = keyTime[call_n - 1];
            cout << ">> qtime " << call_n - 1 << ' ' << abs(t2 - startingPoint) << endl;
            QueueTime.push_back(abs(t2 - startingPoint));
        } else if (x == "avg_qtime") {
            double avg, sum = 0, N = QueueTime.size();
            for (auto& e : QueueTime) {
                sum += e;
            }
            avg = sum / N;
            cout << ">> avg_qtime " << round(avg * 100.0) / 100.0 << endl;
        }
    }
    return 0;
}