#include<iostream>
#include<cstring>
using namespace std ;
int main ()
{
      char name [] = "Anisul";
      char name2 [10] ;
      char name3 [] = "afrin ";
      char name4 [] = "sultana";
      int len = strlen(name);
      cout<<len<<endl;
      strcpy(name2,name);
      cout<<name2<<endl;
      strupr(name3);
      strcat(name3,name4);
      cout<<name3<<endl;
      int value = strcmp(name,name3);
      if(value==0)
      cout<<"equal "<<endl;
      else
      cout<<"not equal"<<endl;
      
    return 0;
}