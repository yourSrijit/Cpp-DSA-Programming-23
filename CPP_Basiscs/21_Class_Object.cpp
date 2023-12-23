#include <iostream>
using namespace std;
class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "The value of a " <<a << endl;
        cout << "The value of b " <<a << endl;
        cout << "The value of c " <<c << endl;
        cout << "The value of d " <<d << endl;
        cout << "The value of e " <<e << endl;
    }
};
void employee::setData(int a1,int b1,int c1){
        a=a1;
        b=b1;
        c=c1;
    }

int main()
{
   //Crating object
   employee srijit;
   srijit.d=54;
   srijit.e=69;
   srijit.setData(20,30,40);
   srijit.getData();

     
    return 0;
}