#include <iostream>
#include <cmath>
using namespace std;

int number(int a)
{
   if ((a%2) == 0)
   {
	   cout<<"The value is Even "<<a<<endl;
   }
   else if ((a%2) != 0)
   {
	   cout<<"The value is odd "<<a<<endl;
   }
   else
   {
	   cout<<"Something Wrong Please Give Positive Intiger"<<endl;
   }   
   return 0;
}
int main() {
	int T,x;
	cin>>T; // Entered Input

	for(int i=1;i<=T;i++)
	{
	    cin>>x;
	    cout<<number(x)<<endl;
	}
	return 0;
}

