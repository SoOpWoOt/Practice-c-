#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std ;
int main ()
{
     for(int i =1 ; i<=10 ;i++)
     {
     int random = rand ()%5+1;
     cout<<"number = "<<random<<endl ;
     }
     getch ();
     return 0;
}
