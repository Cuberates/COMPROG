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
   ll a, b, c;
   cin >> a >> b >> c;

   // make a = b
   ll diff = b - a;
   if (c < diff) cout << "NO \n";
   else { 
      c -= diff; 
      a = b; 
      // cout << a << " " << b << " " << c << "\n";

      // a + x = c - 2x
      // 3x = c - a

      if (c == a) cout << "YES \n";
      else { 
         if (c - a < 0) cout << "NO \n";
         else if ((c - a) % 3 != 0) cout << "NO \n";
         else cout << "YES \n";
      }
   }
}  


int main(void) { 	
   IO(); // disable synchronization  
   int tests = 1;
   cin >> tests; 
   FOR(i, 1, tests) { 
      gabagoo();
   }
}
