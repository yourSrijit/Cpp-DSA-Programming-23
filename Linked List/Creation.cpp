#include<iostream>
using namespace std;
struct Node{
    int data;
    Node * next;
    Node(int a){
        data=a;
        next=NULL;
    }

};
void travers(Node *ptr){
    while(ptr!=NULL){
        std::cout<<"Data is "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
void recursiveTravers(Node *ptr)
{
    if(ptr==NULL){
        return ;
    }
    std::cout<<"Data is "<<ptr->data<<endl;
    recursiveTravers(ptr->next);
}
int main()
{
     Node* head =new Node(10);
     head->next =new Node(20);
     head->next->next=new Node(30);
     travers(head);
    return 0;
}