#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std ;
int main ()
{
     string line;
     ifstream file("details.txt");
     while (getline(file,line));
     {
          cout<<line<<endl;
     }
     file.close();

     getch();
     return 0;
}