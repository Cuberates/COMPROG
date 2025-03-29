#include <iostream>
 
using namespace std;
 
const int MOD = 1e9 + 7;
 
int main () {
	int n;
	cin >> n;
	long long answer = 1;
	while (n > 0) {
		answer = (answer * 2) % MOD; 
		n--; 
	}
	cout << answer << "\n";
}