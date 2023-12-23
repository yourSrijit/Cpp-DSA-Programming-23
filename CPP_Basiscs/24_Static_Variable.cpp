/*
Static data members are class members that are declared using static keywords.
A static member has certain special characteristics.
These are:
1.Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
2.It is initialized before any object of this class is being created, even before main starts.
3.It is visible only within the class, but its lifetime is the entire program
*/
#include<iostream>
using namespace std;
class Test{
    int a=0;
    static int b;     //Bydefault the initial value of b is zero
    public:
    static void increment(){
        // a++;
        b++;
        // cout<<a<<endl;    //gives error bcz static function only access static variables
         cout<<b<<endl;
         cout<<"I am the static function"<<endl;
    }    

};
int Test::b;    //Explicitly declared the static vriable outside of the class
int main()
{
    Test::increment();
    
    return 0;
}