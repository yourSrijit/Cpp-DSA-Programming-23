//   Write a cpp program to find a String is binary or not??
// Also convert that string into it's one's complement
#include <iostream>
using namespace std;
class binary
{
private:
    string s;

public:
    void chk_binary();
    void read();
    void display();
    void one_complement();
    int flag =0;
};


void binary::read()
{
    cout << "Enter the number" << endl;
    cin >> s;
}
void binary::chk_binary(){
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            flag =0; 
        }
        else{
            flag =1;
        }
        
    }
     if(flag == 0){
         cout << "Incorrect binary format" << endl;
     }
     else{
          cout << "Valid binary format" << endl;
     }
}
void binary::one_complement(){
   if(flag==1){
    cout<<"One's complements of the binary number is"<<endl;
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
   }
   else{
    exit(0);
   }

}
void binary::display(){
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
        binary obj;
        obj.read();
        obj.display();
        obj.chk_binary();
        obj.one_complement();
        obj.display();


    return 0;
}