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

#define ll long long
#define pii pair<int,int>

void gabagoo() {
   int n, k;
   cin >> n >> k; 
   vector<int> l(n), r(n); 
   // ll total = 0; 
   for(int i = 0; i < n; i++) cin >> l[i];
   for(int i = 0; i < n; i++) cin >> r[i]; 
   // Pick all n colors of opposite pairs
   ll ans = 0; 
   vector<int> pf(n);
   vector<int> ps(n); 
   for(int i = 0; i < n; i++) { 
      pf[i] = max(l[i], r[i]);
      ps[i] = min(l[i], r[i]); 
      ans += pf[i];
   }
   sort(ps.begin(), ps.end(), greater<int>() );
   for(int i = 0; i < k-1; i++) {
      ans += ps[i];
   }
   ans++; 
   cout << ans << "\n";
}  
int main(void) { 	
   ios_base::sync_with_stdio(false); 
   cout.tie(0); cin.tie(0);
   int tests = 1;
   cin >> tests; 
   for(int i = 1; i <= tests; i++) 
      gabagoo(); 
   
}