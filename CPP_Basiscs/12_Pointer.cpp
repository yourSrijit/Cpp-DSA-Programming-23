// Pointers are symbolic representations of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures. Iterating over elements in arrays or other data structures is one of the main use of pointers. 
// The address of the variable you’re working with is assigned to the pointer variable that points to the same data type (such as an int or string)

// C++ program to illustrate Pointers

#include <bits/stdc++.h>
using namespace std;
void pointer()
{
	int var = 20;

	// declare pointer variable
	int* ptr;

	// note that data type of ptr and var must be same
	ptr = &var;

	// assign the address of a variable to a pointer
	cout << "Value at ptr = " << ptr << "\n";
    cout<<"Adress od var is "<<&var<<endl;
	cout << "Value at var = " << var << "\n";
	cout << "Value at *ptr = " << *ptr << "\n";
}
// Driver program
int main()
{
pointer();
return 0;
}
