#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int gcd(int a,int b){
  if(b==0)return a;
  return gcd(b,a%b);
}

int main() {
  int t;
  cin>>t;

  while (t--){
    int a,b;
    cin>>a>>b;
    int ans=gcd(a,b);
    int lcm=(a*b)/ans;
    cout<<ans<<" "<<lcm<<endl;

  }
}
