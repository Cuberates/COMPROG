// Headers from chenjb
#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "../template.h"
#endif
using namespace std;
void IO() { ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0); }
// constants
const int maxN            = 3e5+1;
const int inf             = 1e9+10;
// data structure
typedef pair<int, int>        pii;
typedef map<int, int>         mii;
typedef map<char, int>        mci;
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
   // 2*k + 2*k = 3*n???
   // 1.25 * (3 * n) / 2??
   ll n; 
   cin >> n; 
   // 4 : 3
   // k : 3n
   cout << n * 4 / 2 << "\n";
}  

int main(void) { 
   IO(); // disable synchronization  
   int tests = 1;
   cin >> tests; 
   FOR(i, 1, tests) { 
      gabagoo();
   }
}
