#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* create(int val){
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    node->data=val;
    node->left=node->right=NULL;
    return node;
}

int max(int a,int b){
    return a>b?a:b;
}

int height(struct Node* root){
    if(root==NULL)
        return 0;

    return 1+max(height(root->left),height(root->right));
}

int diameter(struct Node* root){

    if(root==NULL)
        return 0;

    int lh=height(root->left);
    int rh=height(root->right);

    int ld=diameter(root->left);
    int rd=diameter(root->right);

    return max(lh+rh+1,max(ld,rd));
}

int main(){

    struct Node* root=create(1);
    root->left=create(2);
    root->right=create(3);
    root->left->left=create(4);
    root->left->right=create(5);

    printf("Height: %d\n",height(root));
    printf("Diameter: %d\n",diameter(root));
}
