#include<iostream>
using namespace std;
template <typename T>
 T findMax(T a,T b){
    return (a>b)? a:b;
 }

int main()
{
    cout<<"Enter two variable"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"The large number is "<<findMax(a,b); ;
     
    return 0;
}