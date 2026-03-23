#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    vector<int> bt = {5, 3, 8}; // burst times
    int tq = 2; // time quantum

    for (int i = 0; i < bt.size(); i++)
        q.push(i);

    while (!q.empty()) {
        int i = q.front(); q.pop();

        if (bt[i] > tq) {
            cout << "Process " << i << " runs for " << tq << endl;
            bt[i] -= tq;
            q.push(i);
        } else {
            cout << "Process " << i << " finishes in " << bt[i] << endl;
            bt[i] = 0;
        }
    }
}
