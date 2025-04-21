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

#include <bits/stdc++.h>
#include <iostream> 
#include <map> 
using namespace std;
void IO() { ios_base::sync_with_stdio(false); 
            cout.tie(0); cin.tie(0); }
// constants
#define maxN            1e5
#define inf             1e9+7
// data structures
#define pii             pair<int,int>
#define mii             map<int,int> 
#define mci             map<char,int>
#define ll              long long
#define vect            vector
// operations and loops
#define FOR(i, a, b)    for(int(i)=(a);(i)<=(b);(i)++)
#define FORR(i, a, b)   for(int(i)=(a);(i)>=(b);(i)--)
#define pb              push_back
#define all(x)          (x).begin(), (x).end()
#define len(x)          (x).length() 
#define size(x)         (x).size()


void gabagoo() {
   int n; string s; 
   vect<int> ans(n, 0);
   cin >> n >> s;    
 
   int mx = 1;  
   FOR(i, 0, n-1) { 
      if (i == 0) ans[i] = 1; 
      else if (s[i-1] == '<') {
         ans[i] = 1; 
         FORR(j, i-1, 0) {
            ans[j]++; 
            mx = max(ans[j], mx);  
         }
      } else { 
         mx++; 
         ans[i] = mx; 
      }
   }
   FOR(i, 0, n-1) { cout << ans[i] << " "; }
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
