// A template is a  yet very powerful tool in C++. The simple idea is to pass the data 
// type as a parameter so that we don’t need to write the same code for different data types.
// For example, a software company may need to sort() for different data types. 
// Rather than writing and maintaining multiple codes, we can write one sort() and pass the datatype as a parameter. 

#include <iostream>
#include <typeinfo>
using namespace std;
template <class T> // T ->Gerneric
void fun(T n)
{
    cout << typeid(n).name()<<endl;
}
// template <class T,class T>  give an error bcz at a time T can't be two dif data type

template <class T1,class T2>
void fun1(T1 a,T2 b){
    cout << typeid(a).name()<<endl;
    cout << typeid(b).name()<<endl;
}

int main()
{
   fun(10);       //i
   fun('S');      //c
   fun(10.6);     //d
   fun(10.6f);    //f
   cout<<endl;
   fun1(10,5.6f);  //i f
    return 0;
}