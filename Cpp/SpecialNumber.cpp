#include <bits/stdc++.h>

#include <iostream>
using namespace std;

long long int fact(long long int n){
  if(n<=1)return 1; // 0 factorial is 1;
  return n*fact(n-1);
}
void solve()
{
  long long int n,t;
  cin>>n;
  t=n;
  long long int sum=0;
  while(n>0){
    sum+=fact(n%10);
    n=n/10;
  }
  if(sum==t)cout<<"Special Number"<<endl;
  else cout<<"Not a Special Number"<<endl;
}
int main() {
  int t;
  cin>>t;

  while (t--){
    solve();
  }
}
