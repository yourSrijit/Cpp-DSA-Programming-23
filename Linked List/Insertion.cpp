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
Node* Insert_big(Node *head){
    int x;
    std::cout<<"Enter the data you want to insert at the bigining\n";
    std::cin>>x;
    Node *temp=new Node(x);
    temp->next =head;
    return temp;
}
Node *Insert_end(Node *head){
    Node *ptr =head;
    int z;
    std::cout<<"Enter the data"<<endl;
    std::cin>>z;
    Node *temp =new Node(z);
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next =temp;
    return head;
}
Node * Inser_at(Node *head){
    Node *ptr =head;
    int x,y,count =0;
    std::cout<<"Enter the index you want to insert and data\n";
    std::cin>>x>>y;
    Node *temp =new Node(y);
    while(count<x && ptr->next !=NULL){
      ptr=ptr->next;
      count++;
    }
    temp->next=ptr->next;
    ptr->next =temp;
    return head;
}
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

    //  std::cout<<"After insertion "<<endl;
    //  Node *tmp=Insert_big(head);
    //  travers(tmp);

    //  std::cout<<"After insert \n";
    //  Node* a=Insert_end(tmp);
    //  travers(a);

     std::cout<<"After insert \n";
     Node *p=Inser_at(head);
     travers(p);

    return 0;
}