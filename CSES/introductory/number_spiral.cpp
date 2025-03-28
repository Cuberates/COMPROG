#include <iostream>

#define ll long long

using namespace std;

int main(void) { 
	ios_base::sync_with_stdio(NULL);
	cin.tie(0); cout.tie(0);
	int tt; cin >> tt; 
	for(tt; tt > 0; tt--) { 
		ll y, x; 
		cin >> y >> x; 
		swap(x, y);
		ll ans; 
		if(x >= y && x % 2 == 0) ans = (x*x)-y+1; 
		else if(x >= y && x % 2 != 0) ans = ((x-1)*(x-1))+y-1; 
		else if(x < y && y % 2 == 0) ans = ((y-1)*(y-1))+x-1;
		else ans = (y*y)-x+1; 
		cout << ans << "\n";
	}
}