#include <iostream>
using namespace std;
class items
{
private:
    void setitem();
    int price[100];
    int id[100];
    int n;

public:
    void setprice();
    void display();
};
void items::setitem()
{
    cout << "Enter the number of items" << endl;
    cin >> n;
}
void items::setprice()
{
    setitem();
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the price of id=" << (i + 1) << endl;
        cin >> price[i];
    }
}
void items::display()
{
    // cout<<"srijit";
    for (int i = 0; i < n; i++)
    {
        cout << "Price of id=" << (i + 1) << " is " << price[i] << endl;
    }
}
int main()
{
    items ob;
    ob.setprice();
    ob.display();
    return 0;
}