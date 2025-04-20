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

std::vector<std::string> grid;
int m, n;
 
bool check_path (int u, int v) { 
   // check horizontal
   int res1 = true;
   for(int i = u; i >= 0 && res1; i--) { 
      if(grid[i][v] == '0') res1 = false;  
   }
   int res2 = true; 
   for(int i = v; i >= 0 && res2; i--) { 
      if(grid[u][i] == '0') res2 = false; 
   }
   if(!res1 && !res2) return false; 
   else return true; 
}

void solve() { // SOLUTION GOES HERE
   // int m, n; 
   std::cin >> m >> n; 
   // std::vector<std::string> grid(m);
   grid = std::vector<std::string>(m);
   for(int i = 0; i < m; i++) { 
      std::cin >> grid[i];
   }
      
   int ans = true; 
   for(int i = 0; i < m && ans; i++) {
      for(int j = 0; j < n && ans; j++) { 
         if (grid[i][j] == '1') { 
            int path_exist = check_path(i, j);
            if(!path_exist) { 
               ans = false; 
               break; 
            }
         }
      }
   }
   std::cout << (ans ? "YES" : "NO") << "\n";
}  