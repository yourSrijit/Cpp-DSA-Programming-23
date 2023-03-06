#include<iostream>
using namespace std;
class A{
    public:
    //  void func(){
    virtual void func(){
    cout<<"Into A"<<endl;
    }

    // virtual void func()=0;   --> Pure virtual class
};
class B :public A {
    public:
    void func(){
    cout<<"Into B"<<endl;
    }
};
class C : public A{
    public:
    void func(){
    cout<<"Into C"<<endl;
    }
};
class D:public B,public C{
    public:
    void func(){
    cout<<"Into D"<<endl;
    }
};

int main()
{
     A *p;
    //  A ob;
    //  p=&ob;
    //  p-> func();

     B ob1;
     p=&ob1; // Only possible as B is the child class of A
     p-> func();  //it only show the type of the p pointer (With out virtual function) print the function of class A
    
    return 0;
}