#include <iostream>
#include <queue>
using namespace std;

struct Process {
    int id;
    int burst;
};

int main() {

    queue<Process> q;

    q.push({1,5});
    q.push({2,3});
    q.push({3,8});

    int quantum = 2;

    while(!q.empty()) {

        Process p = q.front();
        q.pop();

        if(p.burst > quantum) {

            cout << "Process " << p.id << " runs for " << quantum << endl;
            p.burst -= quantum;
            q.push(p);

        } else {

            cout << "Process " << p.id << " completes\n";
        }
    }
}
