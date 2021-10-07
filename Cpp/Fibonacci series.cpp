#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
  int arr[1001]; // length of array can be diiferent
  arr[0]=0;
  arr[1]=1;
  for (int i=2; i <1001; ++i)
  {
    arr[i]=arr[i-1]+arr[i-2]; // Every No is Fibonacci Series is Sum of Previous Two Values
  }
  
  int t; // No of Test Cases
  cin>>t;

  while (t--){
    int n; // length of Fibonacci series
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
}
