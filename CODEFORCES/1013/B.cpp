#include <iostream> 
#include <vector> 
#include <map>
#include <cmath> 
#include <stack>
#include <queue>
#include <string> 
#include <algorithm>
#include <random> 

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
   int N, X; std::cin >> N >> X; 
   std::vector<int> A(N);
   for(int i = 0; i < N; i++) 
      std::cin >> A[i];
   sort(A.begin(), A.end(), std::greater<int>());
    
   int cnt = 1, ans = 0; 
   for(int i = 0; i < N; i++) {
      if (i != 0) cnt++; 
      if (A[i] * cnt >= X) { 
         cnt = 0; 
         ans++; 
      }
   }
   std::cout << ans << "\n";
}

