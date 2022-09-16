#include <iostream> 
#include <string>
using namespace std; 
template<class A>
void str_cat(A &a, A &b)
{
a=a + " ";
a=a+ b;
};
void main ()
{
string name ("Sanjeela"); 
string Surname ("Sagar");
cout<<endl<<"First Name: "<<name; 
cout<<endl<<"Surname: "<<Surname; 
str_cat(name,Surname);
cout << endl<< "Full Name: "<<name;
}