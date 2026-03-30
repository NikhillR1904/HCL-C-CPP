#include <iostream>
using namespace std;

typedef struct {
    int id;
    string name;
} Student;

int main() {
    Student s1 = {1, "Nikhill"};

    cout << "ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
}
