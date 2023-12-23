// Destructors in C++ are members functions in a class that delete an object.
// They are called when the class object goes out of scope such as when the function ends,
// the program ends, a delete variable is called etc.
// Destructors are different from normal member functions as they don’t take any argument and don’t return anything.
// Also, destructors have the same name as their class and their name is preceded by a tilde(~).
#include<iostream>
using namespace std;
class Test{
    private:
    int num1,num2;
    public:
    Test(int n1,int n2){
        cout<<"Inside the constructor"<<endl;
        num1=n1;
        num2=n2;
    }
    void display(){
        cout<<"Numbers are"<<endl;
        cout<<num1<<endl;
        cout<<num2<<endl;

    }
    ~Test(){
        cout<<"Inside the destructor"<<endl;
        cout<<"So that the alocated address of the object are now free";
    }
};

int main()
{
    Test ob(5 ,6);
    ob.display();
    return 0;
}