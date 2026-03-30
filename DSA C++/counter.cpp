#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    // Constructor
    Counter(int v = 0) {
        value = v;
    }

    // ?? Prefix ++ (++c)
    Counter& operator++() {
        value++;
        return *this;  // return updated object
    }

    // ?? Postfix ++ (c++)
    Counter operator++(int) {
        Counter temp = *this; // store old value
        value++;
        return temp; // return old object
    }

    // ?? Convert Counter ? int (IMPORTANT FIX)
    operator int() const {
        return value;
    }

    // Display function
    void display() const {
        cout << "Counter value: " << value << endl;
    }
};

int main() {
    Counter c(5);

    cout << "Initial value:\n";
    c.display();

    // Postfix
    int x = c++;  
    cout << "\nAfter x = c++:\n";
    cout << "x = " << x << endl;
    c.display();

    // Prefix
    int y = ++c;  
    cout << "\nAfter y = ++c:\n";
    cout << "y = " << y << endl;
    c.display();

    return 0;
}
