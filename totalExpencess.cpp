#include<iostream>
using namespace std;
int main ()
{
 int a,b,t,td,tp;
 float d;
 d=0.10;
 cout<<"\t \t * Welcome To Our Book Store * "<<endl;
 cout<<"\n";
 cout<<"Enter the Quantity of books you want to Purchase"<<endl;
 cin>>a;
 cout<<"Enter the Price of the Books"<<endl;
 cin>>b;
 t=a*b;
 td= t*d;
 tp= t-td;
 if (t>1000)
 {
  cout<<"\n";
  cout<<"Total Expense = "<<t<<endl;
  cout<<"Total Expense after 10% discount is = "<<tp<<endl;
 } else {
  cout<<"Your Total Expense is "<<t<<endl;
 }
 cout<<"\n";
 cout<<"\t Thank You For Your Purchase "<<endl;
 cout<<"\t  Hope You will visit again "<<endl;
 
 
}
