#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
 
	string S;
	cin >> S;
	char k = S[0]; ll ans=1, count=1;
	for(int i=1;i<S.length();i++) {
		if(S[i]!=k) {
			k=S[i];
			ans=max(ans, count);
			count=1;
		} else count++;
		ans = max(ans, count);
	}
	cout << ans << "\n";
}