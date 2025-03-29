#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
const int mxn = 2*1e5;
ll a[mxn];
 
int main(){
	ll n, ans=0;
	cin >> n;
	for(ll i=0;i<n;i++) cin >> a[i];
	for(ll i=1;i<n;i++) {
		if(a[i]<a[i-1]) {
			ll k = a[i-1]-a[i];
			a[i]+=k;
			ans+=k;
		}
	}
	cout << ans << "\n";
}
