#include<iostream>
#include <bits/stdc++.h>
using namespace std;

struct Mystack{
    vector <int>v;
    void Push(int d){
        v.push_back(d);
    }
    int Pop(){
        int data=v.back();
        v.pop_back();
        return data;
    }
    int Peek(){
        return v.back();
    }
    // void Display(){
    //     for(auto a:v){
    //         std::cout<<a\n;
    //     }
    // }

};

int main()
{
    int n;
    Mystack s;
    while(true){
         std::cout<<"1:For push\n2:For pop\n3:For peek\n4:Display\n5:Exit\n";
          std::cin>>n;
    switch(n){
        case 1:
         int val;
        std::cout<<"Enter the data to push\n";
        std::cin>>val;
           s.Push(val);
           break;
        case 2:
           std::cout<<"The pop element is "<<s.Pop()<<endl;
           break;
        case 3:
            std::cout<<"Top element of the stack is "<<s.Peek()<<endl;
            break;;
        case 4:
            //  s.Display();
             break;
        case 5:
         std::cout<<"Exit Successfuly from the switch case\n";
             return 0;           
    }
    }

    return 0;
}

    
