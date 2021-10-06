#include <iostream>
#include <cmath>
using namespace std;

int sum(int x,int y)
{
    return x + y;
}
int main() {
	int T,A,B;
	cin>>T; // Entered Input

	for(int i=1;i<=T;i++)
	{
	    cin>>A>>B;
	    cout<<sum(A,B)<<endl;
	}
	return 0;
}
