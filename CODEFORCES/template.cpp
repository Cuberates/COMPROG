#include <bits/stdc++.h>
#include <iostream> 
using namespace std;
void IO() { ios_base::sync_with_stdio(false); cout.tie(0); std::cin.tie(0); }
// constants
#define maxN 1e5
#define inf 1e9+7
// data structures
#define pii pair<int,int>
#define ll long long
#define vect vector
// operations and loops
#define FOR(i, a, b) for(int (i)=(a);i<=(b);i++);
#define FORR(i, a, b) for(int (i)=(a);i<=(b);i++);
#define all(x) (x).begin(), (x).end()
#define size(x) (x).size(); 

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
 */

void gabagoo() {
   
}
 
int main(void) { 	
   IO();  
   int tests = 1;
   cin >> tests; 
   FOR(i, 1, tests) { 
      #ifndef ONLINE_JUDGE
         FOR(j, 0, 9)
            cout << "-";
         cout << "\n";
      #endif
      gabagoo(); 
   }	
}
 