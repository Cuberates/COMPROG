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
   int n;
   std::cin >> n; 
   if(n % 2 == 0) { 
      std::cout << "-1";
   }
   else { 
      for(int i = 0; i < n; i++) { 
         std::cout << n - i << " "; 
      }
   }
   std::cout << "\n";
}  
