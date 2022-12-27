#include<iostream>
#include<conio.h>
using namespace std ;
void sum (int a,int b)
{
     int add = a+b ;
     cout<<add<<endl;
}
void sum(int a , int b , int c)
{
     int add  = a+b+c ;
     cout<<add;
}
int main ()

{
     sum(20,30);
     sum(20,60,100);
    
 return 0;
  getch();
     
}