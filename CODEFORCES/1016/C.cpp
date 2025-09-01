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
      std::cout << "\n";
      #endif
      solve(); 
   }	
}
 
void solve() { // SOLUTION GOES HERE
   ll x, k; 
   std::cin >> x >> k;

   if (k > 1) { 
      if (k == 2 && x == 1) std::cout << "YES";
      else std::cout << "NO";
   } else { 
      if (x == 1) std::cout << "NO";
      else { 
         int is_prime = true; 
         for(int i = 2; i <= std::sqrt(x); i++) { 
            is_prime *= (x % i != 0); 
         }
         std::cout << (is_prime ? "YES" : "NO");
      }
   }
   std::cout << "\n";
}  
