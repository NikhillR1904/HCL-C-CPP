#include <iostream>
using namespace std;

class Teacher {
public:
    virtual void work() {
        cout << "Teaching students\n";
    }
};

class Researcher {
public:
    virtual void work() {
        cout << "Doing research\n";
    }
};

class Professor : public Teacher, public Researcher {
public:
    void work() {
        cout << "Teaching and Researching\n";
    }
};

int main() {
    Professor p;
    p.work();
}
