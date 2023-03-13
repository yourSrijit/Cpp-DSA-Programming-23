#include<iostream>
using namespace std;

int main()
{
      int i,j,k;
    try{
        cin>>i>>j;
         if(j==0){
            throw 1;
            // throw "Srijit";
        }
        int k=i/j;
       cout<<k;
    }
    // catch(...){   Catching al exception

    // }
    catch(int p){
        cout<<"Exception handelling occure "<<p<<endl;
    }
    return 0;
}