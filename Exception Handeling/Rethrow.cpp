#include<iostream>
using namespace std;
void func(int n){
    try{
        if(n>20){
            throw 10;
        }
    }
    catch(int x){
        cout<<"Exceptoion occured "<<x<<endl;
        throw ; //Rethrowing in cpp
    }
}

int main()
{
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    try{
        func(n);
    }
    catch(...){
        cout<<"Exception occured<<endl";
    }
    return 0;
}