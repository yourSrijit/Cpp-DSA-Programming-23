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
void PrintKdist(Node *root,int k){
    if(root==NULL) return;

    if(k==0 ){
       std::cout<<root->data;
    }
   else{
        PrintKdist(root->left,k-1);
        PrintKdist(root->right,k-1);
    }

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
    PrintKdist(root,3);
    
    return 0;
}