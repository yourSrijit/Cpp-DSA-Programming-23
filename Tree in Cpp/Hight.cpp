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
int Hight(Node * root){
    if(root==NULL){
        return 0;
    }
    int h=max(Hight(root->left),Hight(root->right))+1;
    return h;
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
//    Inorder(root);
      std::cout<<"Hight of the tree is "<<Hight(root)<<endl;
    
    return 0;
}