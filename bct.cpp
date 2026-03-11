#include <iostream>
#include <climits>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

bool isBSTUtil(Node* root, int min, int max){
    if(root == NULL)
        return true;

    if(root->data <= min || root->data >= max)
        return false;

    return isBSTUtil(root->left,min,root->data) &&
           isBSTUtil(root->right,root->data,max);
}

bool isBST(Node* root){
    return isBSTUtil(root,INT_MIN,INT_MAX);
}

int countNode=0;

void kthSmallest(Node* root,int k){
    if(root==NULL)
        return;

    kthSmallest(root->left,k);

    countNode++;
    if(countNode==k){
        cout<<"Kth smallest: "<<root->data<<endl;
        return;
    }

    kthSmallest(root->right,k);
}

int main(){

    Node* root=new Node(5);
    root->left=new Node(3);
    root->right=new Node(7);
    root->left->left=new Node(2);
    root->left->right=new Node(4);

    if(isBST(root))
        cout<<"Tree is BST"<<endl;
    else
        cout<<"Not BST"<<endl;

    kthSmallest(root,3);

}
