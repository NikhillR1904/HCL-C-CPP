#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* merge(Node* l1, Node* l2) {

    Node dummy;
    Node* tail = &dummy;
    dummy.next = NULL;

    while(l1 && l2) {

        if(l1->data < l2->data) {
            tail->next = l1;
            l1 = l1->next;
        }
        else {
            tail->next = l2;
            l2 = l2->next;
        }

        tail = tail->next;
    }

    tail->next = (l1) ? l1 : l2;

    return dummy.next;
}

void printList(Node* head) {
    while(head) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {

    // First linked list: 1 -> 3 -> 5
    Node* l1 = new Node{1, NULL};
    l1->next = new Node{3, NULL};
    l1->next->next = new Node{5, NULL};

    // Second linked list: 2 -> 4 -> 6
    Node* l2 = new Node{2, NULL};
    l2->next = new Node{4, NULL};
    l2->next->next = new Node{6, NULL};

    Node* merged = merge(l1, l2);

    cout << "Merged List: ";
    printList(merged);

}
