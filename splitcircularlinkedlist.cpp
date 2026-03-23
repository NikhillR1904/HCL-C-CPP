#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to insert node at end (circular)
Node* insert(Node* head, int data) {
    Node* newNode = new Node{data, NULL};

    if (!head) {
        newNode->next = newNode;
        return newNode;
    }

    Node* temp = head;
    while (temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;

    return head;
}

// Function to split circular list
void split(Node* head, Node** head1, Node** head2) {
    if (!head) return;

    Node *slow = head, *fast = head;

    while (fast->next != head && fast->next->next != head) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // For even nodes
    if (fast->next->next == head)
        fast = fast->next;

    *head1 = head;
    *head2 = slow->next;

    // Make first half circular
    slow->next = *head1;

    // Make second half circular
    fast->next = *head2;
}

// Print circular list
void print(Node* head) {
    if (!head) return;

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main() {
    Node* head = NULL;

    // Create circular list: 1 2 3 4 5 6
    for (int i = 1; i <= 6; i++)
        head = insert(head, i);

    Node *head1 = NULL, *head2 = NULL;

    split(head, &head1, &head2);

    cout << "First half: ";
    print(head1);

    cout << "Second half: ";
    print(head2);

    return 0;
}
