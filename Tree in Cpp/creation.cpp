#include<iostream>
using namespace std;
struct  Node{
    int data;
    Node *left;
    Node * right;
    public:
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
void Inorder(Node * root){
    if(root==NULL){
        return;
    }
    Inorder(root->left);
    std::cout<<root->data<<endl;
     Inorder(root->right);
}
void Postorder(Node *root){
     if(root==NULL){
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    std::cout<<root->data<<endl;
    
}
void Preorder(Node * root){
     if(root==NULL){
        return;
    }
    std::cout<<root->data<<endl;
    Postorder(root->left);
    Postorder(root->right);
   
}

int main()
{   Node* root = new Node(1);
 
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
 
    /* 4 becomes left child of 2
         1
        / \
       2   3
      /  \ / \
     4 NULL NULL NULL
     /   \
    NULL NULL
    */
   Inorder(root);
    
    return 0;
}