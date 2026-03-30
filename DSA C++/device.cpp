#include <iostream>
using namespace std;

class Device {
protected:
    string brand;

public:
    void setBrand(string b) {
        brand = b;
    }
};

class Mobile : public Device {
protected:
    int battery;

public:
    void setBattery(int b) {
        battery = b;
    }
};

class Smartphone : public Mobile {
private:
    string os;

public:
    void setOS(string o) {
        os = o;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Battery: " << battery << " mAh\n";
        cout << "OS: " << os << endl;
    }
};

int main() {
    Smartphone s;
    s.setBrand("Samsung");
    s.setBattery(5000);
    s.setOS("Android");

    s.display();
}
