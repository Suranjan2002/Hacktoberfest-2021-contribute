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
    int GCD=gcd(a,b);
    int LCM=(a*b)/ans;
    cout<<GCD<<" "<<LCM<<endl;

  }
}
