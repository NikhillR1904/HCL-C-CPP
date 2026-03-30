#include <iostream>
using namespace std;

class Seconds;

class Meters {
public:
    double value;

    explicit Meters(double v) : value(v) {}
};

class Seconds {
public:
    double value;

    explicit Seconds(double v) : value(v) {}
};

class MetersPerSecond {
public:
    double value;

    explicit MetersPerSecond(double v) : value(v) {}

    void display() {
        cout << "Speed: " << value << " m/s" << endl;
    }
};

// ?? Only valid operation allowed
MetersPerSecond operator/(const Meters& m, const Seconds& s) {
    return MetersPerSecond(m.value / s.value);
}

int main() {
    Meters m(100);
    Seconds s(10);

    MetersPerSecond speed = m / s;
    speed.display();

    // ? Not allowed (no operator defined)
    // auto wrong = s / m;

    return 0;
}
