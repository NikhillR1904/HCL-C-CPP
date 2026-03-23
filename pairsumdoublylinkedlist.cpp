#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next, *prev;
};

// Insert at end
Node* insert(Node* head, int data) {
    Node* newNode = new Node{data, NULL, NULL};

    if (!head)
        return newNode;

    Node* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

// Find pairs with given sum
void findPairs(Node* head, int target) {
    Node* left = head;
    Node* right = head;

    // Move right to last node
    while (right->next)
        right = right->next;

    cout << "Pairs: \n";

    while (left != right && right->next != left) {
        int sum = left->data + right->data;

        if (sum == target) {
            cout << "(" << left->data << ", " << right->data << ")\n";
            left = left->next;
            right = right->prev;
        }
        else if (sum < target)
            left = left->next;
        else
            right = right->prev;
    }
}

void print(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    // Sorted DLL: 1 2 3 4 5 6 7 8 9
    for (int i = 1; i <= 9; i++)
        head = insert(head, i);

    cout << "List: ";
    print(head);

    int target = 10;

    findPairs(head, target);

    return 0;
}
