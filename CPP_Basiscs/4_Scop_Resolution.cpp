#include <iostream>
using namespace std;
int c = 54; /* Declare as global variable*/
int main()
{
    int a, b, c;
    cout << "Enter the numbers :";
    cin >> a;
    cin >> b;
    c = a + b;
    cout << "Sum of two number is :" << c<<endl;
    cout << "Sum of two number is using global variable :"<<:: c;  /* Scop Resolution Operator  :: */

    :: c =200;
    cout << "Sum of two number is using global variable :"<<:: c; 

    return 0;
}