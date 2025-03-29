#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
	ll n;
	cin >> n;
	if(n==1) cout << n << "\n";
	else if(n<=3) cout << "NO SOLUTION \n";
	else if(n%2==0) {
		for(ll i=1;i<=n/2;i++) cout << i*2 << " ";
		for(ll i=1;i<=n/2;i++) cout << i*2-1 << " ";
	} else {
		ll k = (n-1)/2;
		for(ll i=1;i<=k; i++) cout << i*2 << " ";
		for(ll i=1;i<=n-k;i++) cout << i*2-1 << " ";
	}
	return 0;
}