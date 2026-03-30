#include <iostream>
using namespace std;

int main() {
    int capacity = 2;
    int size = 0;

    int* arr = new int[capacity];

    for(int i = 1; i <= 5; i++) {
        if(size == capacity) {
            capacity *= 2;
            int* newArr = new int[capacity];

            for(int j = 0; j < size; j++) {
                newArr[j] = arr[j];
            }

            delete[] arr;
            arr = newArr;
        }

        arr[size++] = i;
    }

    cout << "Array elements: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;
}
