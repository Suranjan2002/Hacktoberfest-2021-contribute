//it isn't too tough :)
#include<bits/stdc++.h>
#define ll long long int
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define rep(i,n) for(int (i)=0;(i)<n;(i)++)
#define sz(a) int((a).size())
#define pb push_back
#define F first
#define S second
using namespace std;
typedef pair<ll,ll> ii;
const ll Lim=5*1e3+5;
vector<ii>arr(Lim),lines;
ll n,k,dp[Lim][Lim],cumW[Lim],cumCost[Lim],h[Lim];
bool irrelevant(ii l1,ii l2,ii l3){
                return (l1.S-l3.S)*(l2.F-l1.F) < (l1.S-l2.S)*(l3.F-l1.F);
}
void pre(){
	loop(i,1,n+1){
		cumW[i]=cumW[i-1]+arr[i].S;
		cumCost[i] = cumCost[i-1] + arr[i].S*(arr[i].F-arr[1].F);
		h[i]=arr[i].F-arr[1].F;
	}
}
ll eval(ll a,ll ind){
        ll m = lines[ind].F;
        ll c = lines[ind].S;
	return cumW[a]*m+ c;
}
ll cal(ll n,ll kMax){
	loop(i,1,n+1)
                dp[1][i]=cumCost[i];
	loop(k,2,kMax+1){
                ll i=0;
                lines.clear();
                loop(a,k,n+1){
                        if(sz(lines)<2){
                                lines.pb(ii(-h[a],cumW[a-1]*h[a] - cumCost[a-1]+dp[k-1][a-1]));
                        }
                        else{
                                ii l3 = ii(-h[a],cumW[a-1]*h[a] - cumCost[a-1]+dp[k-1][a-1]);
                                while(i<sz(lines)-1 && irrelevant(lines[sz(lines)-2],lines[sz(lines)-1],l3))
                                        lines.pop_back();
                                lines.pb(l3);
                        }
                        while(i<sz(lines)-1 && eval(a,i)>eval(a,i+1))
                                i++;
                        dp[k][a] = eval(a,i) + cumCost[a];
                }
	}
	return dp[kMax][n];
}
void solve(){
	cin>>n>>k;
	rep(i,n)
		cin>>arr[i+1].F>>arr[i+1].S;
	pre();
	ll ans = cal(n,k);
	cout<<ans;
}
int main (){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll test=1;
	while(test--)
		solve();
	return 0;
}

