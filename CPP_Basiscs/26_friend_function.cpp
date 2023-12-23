// 1.A friend function is a special function in C++ which in-spite of not being member function of a class has privilege to access private and protected data of a class.

// 2.A friend function is a non member function or ordinary function of a class, which is declared as a friend using the keyword “friend” inside the class. By declaring a function as a friend, all the access permissions are given to the function.

// 3.The keyword “friend” is placed only in the function declaration of the friend function and not in the function definition.

// 4.When friend function is called neither name of object nor dot operator is used. However it may accept the object as argument whose value it want to access.

// 5.Friend function can be declared in any section of the class i.e. public or private or protected.

// 6. It cannot access the members directly by their names and need object_name.member_name to access any member.

#include<iostream>
using namespace std;
class largest{
    int a,b,max;
    public:
    //*******************************/
    friend  largest findMax(largest t);

   void input(){
        cout<<"Enter the first number"<<endl;
            cin>>a;
        cout<<"Enter the second number"<<endl;
        cin>>b;
    }

};
 largest findMax(largest t){
    largest ob1;
    if(t.a>t.b){
        t.max =t.a;
    }
    else{
        t.max=t.b;
    }
    cout<<"The maximum number is "<<t.max<<endl;
    return ob1;

}
int main()
{           
    largest ob;
    ob.input();
    findMax(ob);
    
    return 0;
}