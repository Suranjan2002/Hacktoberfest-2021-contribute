#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
    int a, b;
    cin >> a;
    cin >> b;
 
    int remainder;

    remainder = a % b;

    cout  << remainder << endl;
    }
    return 0;
}