#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age :";
    cin >> age;
    if (age < 18)
    {
        cout << "You are not eligiable for the party...";
    }
    else if (age == 18)
    {
        cout << "You are eligible for kid party...";
    }
    else
    {
        cout << "You are eligible for the party...";
    }
    return 0;
}