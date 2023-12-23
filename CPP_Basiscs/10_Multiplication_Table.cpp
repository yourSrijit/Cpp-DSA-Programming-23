// 1.Multiplication table using for loop in C++

#include <iostream>
using namespace std;

int main()
{
   int n;
   cout << "Enter a positive number :";
   cin >> n;

   cout << "The multiplication table of " <<n<< " is :"<< endl;
   for (int i = 0; i <= 10; i++)
   {
      cout << n << "*" << i << "=" << n * i << endl;
   }

   return 0;
}

// 2. Multiplication table using while loop in C++

#include <iostream>
using namespace std;

int main()
{
   int n;
   int i =1;
   cout << "Enter a positive number :";
   cin >> n;
   cout << "The multiplication table of " <<n<< " is :"<< endl;

   while(i<=10)
   {
      cout<<n<<"*"<<i<<"="<<n*i<<endl;
      i++;
   }
   return 0;
}

// 3.Multiplication table using do-while loop in C++
#include <iostream>
using namespace std;

int main()
{
   int i = 1;
   int n;
   cout << "Enter a positive number :";
   cin >> n;
   cout << "The multiplication table of " << n << " is :" << endl;
   do
   {
      cout << n << "*" << i << "=" << n * i << endl;
      i++;
   } while (i <= 10);

   return 0;
}
