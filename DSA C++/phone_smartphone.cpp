#include <iostream>
using namespace std;

class Device {
public:
    string brand;
};

class Phone : virtual public Device {
public:
    void call() {
        cout << "Calling...\n";
    }
};

class Camera : virtual public Device {
public:
    void click() {
        cout << "Taking photo...\n";
    }
};

class Smartphone : public Phone, public Camera {
public:
    void show() {
        cout << "Brand: " << brand << endl;
    }
};

int main() {
    Smartphone s;
    s.brand = "Apple";

    s.call();
    s.click();
    s.show();
}
