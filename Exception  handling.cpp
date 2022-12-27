#include <iostream>
using namespace std;
int main()
{
     while (1)
     {
          try
     {
          
     int a, b;
     cout << "Enter first number " << endl;
     cin >> a;
     cout << "Enter 2nd number" << endl;
     cin >> b;
     if(b==0)
     {
          throw 1;
     }
     double result = (double)a / b;
     cout << result << endl;
     }
     catch(int x)
     {
          cout<<"its not possible"<<endl<<"please try again"<<endl;
     }

     }

     return 0;
}