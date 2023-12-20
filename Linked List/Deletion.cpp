#include<iostream>
using namespace std;
class Node{
    public:
     int data;
     Node *next;
     Node(){

     }
    Node(int a){
            data =a;
            next =NULL;
        }
    void Travers(Node * ptr){
            while(ptr!=NULL){
                std::cout<<ptr->data<<endl;
                ptr=ptr->next;
            }
        }
    Node * dele_first(Node *head){
        if ((head ==NULL))
        {
            return NULL;
        }
        if(head->next ==NULL){
        return head;
        }
        
      Node *cur =head->next;
      delete head;
      return cur;
    }
    Node *dele_last(Node *head){
        if(head ==NULL || head->next ==NULL){
            delete head;
            return NULL;
        }
        Node *cur =head;
        while(cur->next->next !=NULL){
            cur=cur->next;
        }
        delete cur->next;
        cur->next =NULL;
        return head; 
    }
};


int main()
{
     Node *head =new Node(10);
     head->next =new Node(20);
     head->next->next =new Node(30);
     head->next->next->next =new Node(40);
     Node ob;
     std::cout<<"Beore deletion\n";
     ob.Travers(head);
     std::cout<<"After deletion first Node\n";
     Node *a=ob.dele_first(head);
     ob.Travers(a);
      std::cout<<"After deletion last Node\n";
     Node *b=ob.dele_last(a);
     ob.Travers(b);
    return 0;
}
