#include <iostream>
using namespace std;

int main() {
	//to reverse number
	int t;
	cin>>t;
	int num,rev=0,d;

	while(t--){
		cin>>num;
		rev=0;
		while(num>0){
			d=num%10;
		    rev=rev*10+d;
		    num=num/10;

		}
		cout<<rev<<endl;

	}
	return 0;
}