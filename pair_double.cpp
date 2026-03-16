#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* insert(Node* head, int data) {
    Node* newNode = new Node{data, NULL, NULL};

    if(head == NULL)
        return newNode;

    Node* temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

void findPairs(Node* head, int target) {

    Node* left = head;
    Node* right = head;

    while(right->next != NULL)
        right = right->next;

    bool found = false;

    while(left != right && right->next != left) {

        int sum = left->data + right->data;

        if(sum == target) {
            cout << "(" << left->data << ", " << right->data << ")" << endl;
            found = true;

            left = left->next;
            right = right->prev;
        }
        else if(sum < target)
            left = left->next;
        else
            right = right->prev;
    }

    if(!found)
        cout << "No pairs found";
}

void printList(Node* head) {

    Node* temp = head;

    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    Node* head = NULL;

    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 4);
    head = insert(head, 5);
    head = insert(head, 6);
    head = insert(head, 8);
    head = insert(head, 9);

    cout << "Doubly Linked List:\n";
    printList(head);

    int target = 7;

    cout << "\nPairs with sum " << target << ":\n";
    findPairs(head, target);

}
