#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
	ll n;
	cin >> n;
	for(ll k=1;k<=n;k++) {
		ll total = (k*k)*(k*k-1)/2, a1=(k-2)*(k-1)*2, a2=(k-2)*(k-1)*2;
		cout << total-a1-a2 << "\n";
	}
	return 0;
}