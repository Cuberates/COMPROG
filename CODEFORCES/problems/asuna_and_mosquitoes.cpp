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

#include <iostream> 
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <cstring> 
#include <string> 
#include <unordered_map> 

#include <algorithm>
#include <cmath> 
#include <ctime>
#include <random> 
#include <chrono>

using namespace std;
void IO() { ios_base::sync_with_stdio(false); 
            cout.tie(0); cin.tie(0); }
// constants
#define maxN            1e5+1
#define inf             1e9+10
// data structure
typedef pair<int, int>        pii;
typedef map<int, int>         mii;
typedef map<char, int>        mci;
typedef priority_queue<int>   pq;
typedef long long             ll;
typedef vector<int>           vi;

// operations and loops
#define FOR(i, a, b)    for(int(i)=(a);(i)<=(b);(i)++)
#define FORR(i, a, b)   for(int(i)=(a);(i)>=(b);(i)--)
#define pb              push_back
#define all(x)          (x).begin(), (x).end()
#define len(x)          (x).length() 
#define size(x)         (x).size()


void gabagoo() {
   int N; 
   cin >> N; 
   vi A(maxN);
   FOR(i, 0, N-1) 
      cin >> A[i];
   ll sum = 0; 
   int cnt = 0;

   FOR(i, 0, N-1) {
      sum += A[i];
      cnt += (A[i] % 2 != 0);
   }
   int mx = *max_element(all(A));
   if (!cnt || cnt >= N) cout << mx << "\n";
   else cout << sum - cnt + 1 << "\n";
}
int main(void) { 	
   IO(); // disable synchronization  
   int tests = 1;
   cin >> tests; 
   FOR(i, 1, tests) { 
      gabagoo(); 
   }	
}

