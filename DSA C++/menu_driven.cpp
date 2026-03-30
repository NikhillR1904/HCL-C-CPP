#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n1. Hello\n2. Bye\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: cout << "Hello!\n"; break;
            case 2: cout << "Bye!\n"; break;
            case 3: cout << "Exiting...\n"; break;
            default: cout << "Invalid\n";
        }

    } while(choice != 3);
}
