#include<iostream>
#include<conio.h>
using namespace std ;
void display (int num[] )
{
     for(int i =0;i<5;i++)
{
     cout<<num[i]<<" ";
}
}
int main ()
{
     int number [5] ={20,36,36,14,52};
     display(number);

     
     getch ();
     return 0 ;
}