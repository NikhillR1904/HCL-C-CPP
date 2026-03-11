#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};

int max(int a,int b){
    return a>b?a:b;
}

int height(Node* root){
    if(root==NULL)
        return 0;

    return 1+max(height(root->left),height(root->right));
}

int diameter(Node* root){

    if(root==NULL)
        return 0;

    int lh=height(root->left);
    int rh=height(root->right);

    int ld=diameter(root->left);
    int rd=diameter(root->right);

    return max(lh+rh+1,max(ld,rd));
}

int main(){

    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);

    cout<<"Height: "<<height(root)<<endl;
    cout<<"Diameter: "<<diameter(root)<<endl;
}
