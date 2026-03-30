#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;

    cout << "AND: " << (a & b) << endl;
    cout << "OR: " << (a | b) << endl;
    cout << "XOR: " << (a ^ b) << endl;
    cout << "Left Shift a: " << (a << 1) << endl;
    cout << "Right Shift a: " << (a >> 1) << endl;
}
