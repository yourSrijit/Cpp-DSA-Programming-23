#include<iostream>
using namespace std;
class Parent{
    int a =10;
    int b=20;

    public:
     Parent();
     void print();
     
};
Parent::Parent(){
     cout<<"Constructor is calling...";
        cout<<"Enter the value of a"<<endl;
        cin>>a;
        cout<<"Enter the value of b"<<endl;
        cin>>b;
}
void Parent::print(){
    cout<<"I am a printer"<<endl;
    cout<<"The value of a is "<<a<<" and b is "<<b<<endl;
}

int main()
{

    Parent ob;
    ob.print();
    
    return 0;
}