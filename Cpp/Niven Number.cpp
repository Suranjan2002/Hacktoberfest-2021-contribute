#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int sumOfDigit(int n){
  if(n==0)return 0;
  return n%10+sumOfDigit(n/10);
}

int main() {
  fast();
  int t;
  cin>>t;

  while (t--){
    int n;
    cin>>n;
    if(n%sumOfDigit(n)==0)cout<<"Niven Number"<<endl;
    else cout<<"Not a Niven Number"<<endl;
  }
}
