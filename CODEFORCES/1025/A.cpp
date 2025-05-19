/**
 * helpful mentality ^-^
 * . check for parity -> 50% of test cases are solved
 * . n >= k -> ((1e9 - k) / 1e9) * 100% of test cases are solved
 * . unordered ops -> sort the damn thing
 * . small n -> case work or brute force
 * . clear everything pls
 * . cp handbook for algs: 
 *      binary search, 
 *      sliding window, 
 *      2-pointers, primality, 
 *      dp, dfs, bfs, dijkstra,...
 * . some problems can't be gabagooed and that's fine 
**/

#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "../template.h"
#endif
using namespace std;
void IO() { ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);}
#define pb              push_back
#define all(x)          (x).begin(), (x).end()
#define ll              long long
#define vt              vector
/*--------------------------------------------------------------------------*/

void gabagoo() {
   int n; cin >> n; 
   vt<int> a(n);
   int cnt1 = 0, cnt0 = 0; 
   for(int i = 0; i < n; i++) {
      cin >> a[i]; 
      if(a[i]) cnt1++; 
      else cnt0++;  
   }
   if (cnt1 == n) cout << "YES \n";
   else { 
      int good = true;
      for(int i = 0; i < n-1; i++) {
         if (a[i] == 0 && a[i+1] == 0) good = false; 
         // else if (a[i] == 1])
      }
      cout << (!good ? "YES" : "NO") << "\n";
   }
}  

int main(void) { 	
   IO(); // disable synchronization  
   int tests = 1;
   cin >> tests; 
   for(int i = 1; i <= tests; i++) 
      gabagoo(); 
   
}