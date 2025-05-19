// Headers from chenjb
#ifdef ONLINE_JUDGE
   #include <bits/stdc++.h>
#else
   #include "../template.h"
#endif

using namespace std;
void IO() { ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0); }
// constants
const int MAXN            = 2e5+1;
const int INF             = 1e9+10;
// data structure
// typedef pair<int, int>        pii;
// typedef map<int, int>         mii;
// typedef map<char, int>        mci;
// typedef priority_queue<int>   pq;
// typedef vector<int>           vi;
#define ll                       long long
#define vt                       vector

// operations and loops
#define FOR(i, a, b)    for(int(i)=(a);(i)<=(b);(i)++)
#define FORR(i, a, b)   for(int(i)=(a);(i)>=(b);(i)--)
#define pb              push_back
#define all(x)          (x).begin(), (x).end()
#define len(x)          (x).length() 
#define size(x)         (x).size()

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
void gabagoo() {
   int n; cin >> n; 
   vt<ll> a(n);
   FOR(i, 0, n-1) 
      cin >> a[i]; 
   vt<pair<ll, ll> > mx(n+1);
   vt<ll> left(n), right(n); 
   FOR(i, 0, n-1) {
      if(i <= 0) { 
         left[0] = a[0];
         right[0] = a[n-1];
         continue; 
      }
      left[i] = max(a[i], left[i-1]);
      right[i] = max(a[n-1-i], right[i-1]);
   }
   ll psum = 0; 
   FOR(i, 0, n-1) {
      psum += a[n-1-i];
      ll t1 = psum + left[n-i-1] - a[n-i-1]; 
      ll t2 = psum; 
      cout << max(t1, t2) << " ";
   }
   cout << "\n";
} 
int main(void) { 	
   IO(); // disable synchronization  
   int tests = 1;
   cin >> tests; 
   FOR(i, 1, tests) { 
      gabagoo();
   }
}
