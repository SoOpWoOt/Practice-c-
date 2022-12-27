#include<iostream>
#include<string>
#include<fstream>
using namespace std ;
int main ()
{
     string name;
    int age ;
     ofstream file;
    file.open("student_details.txt",ios::out|ios::app);
   
   for(int i =1;i<=3;i++)
   {

     cout<<"Enter your name : "<<endl;
    getline(cin,name);
    file<<name<<endl;
    cout<<"Enter your age : "<<endl;
    cin>>age;
    file<<age<<endl;
    cin.ignore();
   }
   file.close();
     return 0;
}