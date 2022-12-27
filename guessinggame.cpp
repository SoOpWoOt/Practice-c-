#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std ;
int main ()
{
     cout<<"\t\t \t[Welcome to Guessing Game]\t\t"<<endl;

    while(1)
    {
      int guess,randomnumber ;
     cout<<"Enter Your Guess : "<<endl;
     cin>>guess;
     randomnumber = rand ();
     if(guess==randomnumber)
     {
          cout<<"you've won!!"<<endl ;
     }
     else
     {
          cout<<"you've lost, try again :') "<<endl<<"\tand the actual number was : "<<randomnumber<<endl;
     }
     
    }
    getch ();
     return 0;
}