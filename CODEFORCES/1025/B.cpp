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
#define INF             1e9+1; 
#define pb              push_back
#define all(x)          (x).begin(), (x).end()
#define ll              long long
#define vt              vector
/*--------------------------------------------------------------------------*/

int f(int l) {
   if (l <= 1) return 0; 
   return 1 + f(l / 2 + (l % 2 != 0));
}

void gabagoo() {  
   ll n, m, a, b; 
   cin >> n >> m >> a >> b; 
   int ans = f(a)+f(m);
   ans = min(ans, f(n-a+1)+f(m));
   ans = min(ans, f(n)+f(b)); 
   ans = min(ans, f(n)+f(m-b+1));
   cout << ans+1 << "\n";
}  

int main(void) { 	
   IO(); // disable synchronization  
   int tests = 1;
   cin >> tests; 
   for(int i = 1; i <= tests; i++) 
      gabagoo();  
}