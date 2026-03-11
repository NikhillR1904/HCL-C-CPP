#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* create(int val){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = val;
    node->left = node->right = NULL;
    return node;
}

int isBSTUtil(struct Node* root, int min, int max){
    if(root == NULL)
        return 1;

    if(root->data <= min || root->data >= max)
        return 0;

    return isBSTUtil(root->left, min, root->data) &&
           isBSTUtil(root->right, root->data, max);
}

int isBST(struct Node* root){
    return isBSTUtil(root, INT_MIN, INT_MAX);
}

int count = 0;

void kthSmallest(struct Node* root, int k){
    if(root == NULL)
        return;

    kthSmallest(root->left, k);

    count++;
    if(count == k){
        printf("Kth smallest: %d\n", root->data);
        return;
    }

    kthSmallest(root->right, k);
}

int main(){

    struct Node* root = create(5);
    root->left = create(3);
    root->right = create(7);
    root->left->left = create(2);
    root->left->right = create(4);

    if(isBST(root))
        printf("Tree is BST\n");
    else
        printf("Not BST\n");

    kthSmallest(root,3);

}
