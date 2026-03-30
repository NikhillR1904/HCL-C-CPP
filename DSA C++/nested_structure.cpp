#include <iostream>
using namespace std;

struct Customer {
    string name;
    int id;
};

struct Order {
    int orderId;
    Customer cust;
};

int main() {
    Order o;

    o.orderId = 101;
    o.cust.name = "Nikhill";
    o.cust.id = 1;

    cout << "Order ID: " << o.orderId << endl;
    cout << "Customer Name: " << o.cust.name << endl;
    cout << "Customer ID: " << o.cust.id << endl;
}
