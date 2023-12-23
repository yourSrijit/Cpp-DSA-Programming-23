#include<iostream>
using namespace std;
class student{
    private :
    int roll;
    public:
    void yourroll(int a){
        roll =a;
    }
    void display(){
        cout<<"Your roll is "<<roll<<endl;
    }

};
class Test: virtual public student{
    private:
    string subject;
    public:
    void yoursubject(string s){
        subject =s;
    }
    void displaysub(){
        cout<<"Your subject is "<<subject<<endl;
    }

};
class sport:virtual public student{
    private:
    string spname;
    public:
    void yoursp(string sp){
        spname =sp;
    }
    void displaysp(){
        cout<<"Your fev sports is "<<spname<<endl;
    }

};
class srijit :public Test,public sport{
    public:
    void sbdisplay(){
        cout<<"i am srijit class";
    }

};

int main()
{
     srijit ob;
     ob.yourroll(155);
     ob.display();
     ob.yoursubject("COA");
     ob.displaysub();
     ob.yoursp("football");
     ob.displaysp();
     ob.sbdisplay(); 
    return 0;
}