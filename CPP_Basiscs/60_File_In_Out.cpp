#include<iostream>
#include <fstream>
using namespace std;

// The usefull classes for working with filwe in c++ are :
// 1.fstreambase    --> Base class
// 2.fstream        -->Derive class
// 3.ofstream       -->Derive class   for writing


/*
In order to working with file in c++ there have two process
1.Using consrtructor();
2.Using the member fucntion opem() of the 
*/

int main()
{
    string name ="I am Srijit Bera ";
    // Opening files using constructor and writing it
    ofstream out("60_Sample_a.txt");
    cout<<"Writing is in process....."<<endl;
    out<<name;

     // Opening files using constructor and Read it
     string str;
     ifstream in("60_Sample_b.txt");
     cout<<"Reading is in progress"<<endl;
     in>>str;
     //But in this way we only get the first string of the file so we need getline function
     getline(in,str);
     cout<<str;


    return 0;
}