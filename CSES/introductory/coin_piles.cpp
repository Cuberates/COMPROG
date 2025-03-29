#include <iostream>
 
using namespace std;
 
int main () {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
	int tt = 1; 
	cin >> tt; 
	for(int i = 0; i < tt; i++) {
		int a, b; 
		cin >> a >> b; 
		if(a > b) swap(a, b);
		long long x = 2*a - b; 
		if(x >= 0 && (2*a-b) % 3 == 0) { 
			long long y = b - x; 
			if(y >= 0 && y % 2 == 0) cout << "YES \n";
			else cout << "NO \n";
		} else cout << "NO \n";
	}
	return 0;
}