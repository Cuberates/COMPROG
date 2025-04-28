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
   int N, X; 
   cin >> N >> X; 
   vect<int> A(N, -1);
   int j = 0;  
   FOR(i, 0, X-1) { 
      A[i] = i;
      j++;
   }
   // cout << "j: " << j << "\n"; 
   // Go in reverse
   FORR(i, N-1, X) { 
      A[i] = j;
      j++; 
   } 
   FOR(i, 0, N-1) 
      cout << A[i] << " ";
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

/**
 * [0, 1, 2, 3, 4]
 * => [1, 2, 3, 4, 5]
 * 
 * [0, 0, 0, 0, 0]
 * => [1, .... 1]
 * 
 * -> In order to color p[i] x then the prefix must be filled with values less than x
 * 
 * 
 * 
 * 
 * 
 */