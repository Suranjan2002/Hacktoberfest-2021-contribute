// Iterative method to  find sum of digits

#include <bits/stdc++.h>
using namespace std;

class Sum_of_Digits{
  public:
   int Sum(int n){

     int sum=0;
     while(n!=0){
        sum=sum+n%10;
        n=n/10;
     }
    return sum;
   }

};

int main(){
  int T ,N ;
  //cout<<"Enter the number of test cases\n";
   cin>>T; // no of test case
   Sum_of_Digits s; // class object
   while(T--){
    cin>>N;
    cout<<s.Sum(N)<<endl;
   }

 return 0;
}
