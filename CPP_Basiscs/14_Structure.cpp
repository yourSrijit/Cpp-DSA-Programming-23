#include <iostream>
using namespace std;

struct employee
{
    char name;
    int id;
    float salary;
};

int main()
{
    struct employee one;
    one.name = "srijit";
    cout << "The value is" << one.name << endl;
    return 0;
}