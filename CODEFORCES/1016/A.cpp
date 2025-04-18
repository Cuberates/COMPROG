#include <iostream> 
#include <vector> 
#include <map>
#include <cmath> 
#include <stack>
#include <queue>
#include <string> 
#include <random> 
#include <algorithm>

#define ll long long
#define vect vector
#define MOD 1e9+7

void solve();

int main(void) { 	
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0); std::cin.tie(0);

	int tests = 1;
	std::cin >> tests; 
	for(int i = 0; i < tests; i++) {
		#ifndef ONLINE_JUDGE
		for(int j = 0; j < 10; j++)
			std::cout << "-";
		#endif
		std::cout << "\n";
		solve(); 
	}	
}

void solve() { // SOLUTION GOES HERE
   int k; 
   std::cin >> k; 
   if (k % 2 == 0) std::cout << "NO \n";
   else std::cout << "YES \n";
}  

