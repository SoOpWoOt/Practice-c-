#include<iostream>
#include<conio.h>
using namespace std ;
double addition (double ,double );

int main ()
{
     double result = addition (25.904,60);
     cout<<result ;
     getch();
     return 0;
}
double addition (double a,double b)
{
     double sum = a+b ;
     return sum ;
}