#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c;
    a = 45;
    b = 865;
    c = 9685;

    cout << "The value of a without setw =" << a << endl;
    cout << "The value of a without setw =" << b << endl;
    cout << "The value of a without setw =" << c << endl;

    cout << "\n";

    cout << "The value of a using setw =" << setw(5) << a << endl;
    cout << "The value of a using setw =" << setw(5) << b << endl;
    cout << "The value of a using setw =" << setw(5) << c << endl;

    return 0;
}