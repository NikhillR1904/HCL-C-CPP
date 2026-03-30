#include <iostream>
#include <cmath>
using namespace std;

class Point {
public:
    double x, y;

    Point(double x = 0, double y = 0) {
        this->x = x;
        this->y = y;
    }
};

// ?? Distance between two coordinates
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// ?? Distance between two Point objects
double distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

// ?? Distance from origin
double distance(Point p) {
    return sqrt(pow(p.x, 2) + pow(p.y, 2));
}

int main() {
    cout << "Using coordinates: " << distance(1, 2, 4, 6) << endl;

    Point p1(1, 2), p2(4, 6);
    cout << "Using objects: " << distance(p1, p2) << endl;

    cout << "From origin: " << distance(p1) << endl;

    return 0;
}
