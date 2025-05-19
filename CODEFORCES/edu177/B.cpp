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
/*--------------------------------------------------------------------------*/
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

void gabagoo(); 
int main(void) { 	
   IO(); // disable synchronization  
   int tests = 1;
   cin >> tests; 
   for(int i = 1; i <= tests; i++) 
      gabagoo(); 
}
/*--------------------------------------------------------------------------*/

int n, k, x; 
vt<ll> a; 
int q(ll p) {
   ll sum = 0; 
   for(ll i = p; i <= n * k - 1; i++) {
      int p = (i % n); 
      sum += (a[p]); 
   }
   return (sum >= x); 
}
void gabagoo() {
   // int n, k, x; 
   cin >> n >> k >> x; 
   a = vt<ll>(n);
   // a.clear(); 
   ll total_sum = 0; 
   for(int i = 0; i < n; i++) {
      cin >> a[i];
      total_sum += (k * a[i]);
   }
   if (total_sum < x) cout << 0;
   else { 
      ll lb = 0, ub = n * k; 
      while (ub - lb > 1) {
         ll mid = (lb + ub) / 2; 
         int good = q(mid);
         if (good) lb = mid; 
         else ub = mid; 
      }
      cout << ub;
   }
   cout << "\n";
}  

