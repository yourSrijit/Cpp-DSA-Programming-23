// Writye a cpp program to find the distance between two point using parameterizd constructor
#include<iostream>
#include<math.h>
using namespace std;
class Distance{
    int x1,x2,y1,y2;
    public:
    Distance(){
        cout<<"Enter the co-ordinate of the firste point"<<endl;
        cin>>x1;
        cin>>y1;
        cout<<"Enter the co-ordinate of the second point"<<endl;
         cin>>x2;
         cin>>y2;
    }
    void finddistance(){ 
        int difx=x2-x1;
        int dify=y2-y1;
        // cout<<difx<<dify;
        float dis=sqrt(pow(difx,2) + pow(dify,2));
        cout<<"So the distance betwwen two point is "<< dis <<" unit"<<endl;
    }
};

int main()
{
    Distance ob;
    ob.finddistance();
    
    return 0;
}