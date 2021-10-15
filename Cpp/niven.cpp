#include<bits/stdc++.h>

using namespace std;
string checkN(int n)
{
    int m=n,sum = 0;
    while(m!=0)
    {
        sum+=m%10;
        m=m/10
    }

    if (n % sum == 0)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}
 

int main()
{
    int number;
     cin>>number;
    
    cout << checkN(number) << endl;
}
