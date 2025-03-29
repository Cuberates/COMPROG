#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
	ll n, ans=0;
	cin >> n;
	while(n>=5) {
		n/=5;
		ans+=n;
	}	
	cout << ans << "\n";
}
