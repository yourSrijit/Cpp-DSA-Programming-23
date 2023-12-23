#include<iostream>
using namespace std;
class parent{
    private:
    int data1;
    public:
    int data2;
    void setdata(int x,int y);
    int getdata1();
    int getdata2();

};
void parent::setdata(int x,int y){
    data1=x;
    data2=y;
}
int parent::getdata1(){
    return data1;
}
int parent::getdata2(){
    return data2;
}


class child:public parent{
    public:  
    void display(){
          int data3 =data2 +getdata1();
            cout<<"The value of data1 is  "<<getdata1()<<endl;
            cout<<"The value of data2 is  "<<getdata2()<<endl;
            cout<<"The value of data3 is  "<<data3<<endl;
          
    }

};

int main()
{
        int a,b;
        cout<<"Enter the numbers "<<endl;
        cin>>a>>b;
        child ob;
        ob.setdata(a,b);
        ob.display();

        return 0;
}