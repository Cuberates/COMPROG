#include <iostream> 
#include <vector> 
#include <map>
#include <cmath> 
#include <stack>
#include <queue>
#include <string> 
#include <cassert>
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
   std::string n; 
   std::cin >> n; 

   int has_zero = 0; 
   for(char c : n) {
      if (c == '0') has_zero = true; 
   }

   if(!has_zero) std::cout << n.length() - 1 << "\n";
   else {
      int len = n.length();  
      int lst = -1; 
      for(int i = len - 1; i >= 0; i--) {
         if (n[i] != '0') { 
            lst = i; 
            break;
         }
      }
      // assert(lst >= 0); 
      int ans = (len - 1 - lst);
      int non_zeros = 0; 
      for(int i = 0; i < lst; i++) { 
         if(n[i] != '0') non_zeros++; 
      }
      ans += non_zeros; 
      std::cout << ans << "\n";
   }
}  

