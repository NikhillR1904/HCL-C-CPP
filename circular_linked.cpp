#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void split(Node* head, Node** head1, Node** head2) {

    Node* slow = head;
    Node* fast = head;

    while (fast->next != head && fast->next->next != head) {
        slow = slow->next;
        fast = fast->next->next;
    }

    *head1 = head;
    *head2 = slow->next;

    slow->next = *head1;

    Node* temp = *head2;

    while (temp->next != head)
        temp = temp->next;

    temp->next = *head2;
}

void printCircular(Node* head) {

    Node* temp = head;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main() {

    Node* head = new Node{1,NULL};
    head->next = new Node{2,NULL};
    head->next->next = new Node{3,NULL};
    head->next->next->next = new Node{4,NULL};
    head->next->next->next->next = new Node{5,NULL};

    // making circular
    head->next->next->next->next->next = head;

    Node* head1 = NULL;
    Node* head2 = NULL;

    split(head, &head1, &head2);

    cout << "First half: ";
    printCircular(head1);

    cout << "Second half: ";
    printCircular(head2);
}
