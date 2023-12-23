//Dynamic Initializaation of objects
//Write a cpp program to implement simple interast

#include<iostream>
using namespace std;
class simple{
    int principle,year;
    float rate,total;
    public:
    simple(){

    }
    simple(int p,int y,float r){
        principle=p;
        year=y;
        rate=r;        
        total=principle*(1+rate*year);
        cout<<"Your total value after "<<y<<" year is "<<total<<endl;

    }
    simple(int p,int y,int r){
        principle=p;
        year=y;
        rate=float(r)/100;
        total=principle*(1+rate*year);
        cout<<"Your total value after "<<y<<" year is "<<total<<endl;

    }
};


int main()
{      int p,y,R;
      float r;
    simple ob;
    cout<<"Enter the principle ,time and rate respectively"<<endl;
    cin>>p>>y>>r;
      ob=simple( p,y, r);
    cout<<"Enter the principle ,time and rate respectively"<<endl;
    cin>>p>>y>>R;
    ob=simple( p,y, R);
    return 0;
}