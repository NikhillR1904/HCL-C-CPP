#include <iostream>
#include <vector>
using namespace std;

// ?? Overloads
void printDiag(int x) {
    cout << "Integer: " << x << endl;
}

void printDiag(double x) {
    cout << "Double: " << x << endl;
}

void printDiag(string s) {
    cout << "String: " << s << endl;
}

// ?? Specific vector overload (priority over template)
void printDiag(const vector<int>& v) {
    cout << "Vector: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

// ?? Generic template (fallback)
template <typename T>
void printDiag(T val) {
    cout << "Generic: " << val << endl;
}

int main() {
    printDiag(10);
    printDiag(3.14);
    printDiag("Hello");

    vector<int> v = {1, 2, 3};
    printDiag(v);  // Calls vector overload (not template)

    return 0;
}
