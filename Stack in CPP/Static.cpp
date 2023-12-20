#include<iostream>
#include<ostream>
#include<istream>
using namespace std;
struct Mystack
{
    int size;
    int *arr;
    int top;
    Mystack(int d){
        size=d;
        arr =new int[size];
        top=-1;
    }
    void Push(int data){
        if(top==size -1){
         std::cout<<"Stack is overflow\n";
         return;
        }
    top++;
    arr[top]=data;
    std::cout<<"Data enter successfuly"<<endl;
 }
  int Pop(){
    if(top==-1){
        std::cout<<"Stack in underflow\n";
        return 0;
    }
    int pop=arr[top];
    top--;
    std::cout<<"Deletion successfult"<<endl;
    return pop;
  }
   int Peek(){
    return arr[top];
   }
   void Display(){
    for(int i=0;i<top+1;i++){
      std::cout<<arr[i]<<endl;
    }
   }
};

int main()
{
    int x,val;
    std::cout<<"Enter the size of the stack\n";
    std::cin>>x;
    int n;
    Mystack s(5);
    while(true){
         std::cout<<"1:For push\n2:For pop\n3:For peek\n4:Display\n5:Exit\n";
          std::cin>>n;
    switch(n){
        case 1:
        std::cout<<"Enter the data to push\n";
        std::cin>>val;
           s.Push(val);
           break;
        case 2:
           std::cout<<"The pop element is "<<s.Pop()<<endl;
           break;
        case 3:
            std::cout<<"Top element of the stack is "<<s.Peek()<<endl;
            break;;
        case 4:
             s.Display();
             break;
        case 5:
         std::cout<<"Exit Successfuly from the switch case\n";
             return 0;           
    }
    }

    return 0;
}