#include<bits/stdc++.h>
using namespace std;
unordered_set<string> m;
void permutation(string s,int l,int r)
{
	if(l==r && m.count(s)==0)
		{
			m.insert(s);
			cout<<s<<endl;
		}
	else
	{
		for(int i=l;i<=r;i++)
		{
			swap(s[i],s[l]);
			permutation(s,l+1,r);
			swap(s[i],s[l]);
		}
	}
} 
int main()
{
    string s="hello";
    int n=s.size();
    permutation(s,0,n-1);
}