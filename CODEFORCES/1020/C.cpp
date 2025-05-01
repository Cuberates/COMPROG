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
   int N, K; 
   cin >> N >> K; 
   vect<int> A(N), B(N);
   FOR(i, 0, N-1)
      cin >> A[i];
   FOR(i, 0, N-1) 
      cin >> B[i];
   int pivot = -1; 
   int ok = 1;
   FOR(i, 0, N-1) {
      if (B[i] == -1) 
         continue; 
      int s = A[i] + B[i];
      if(pivot != -1 && s != pivot) { 
         ok = 0; 
         break; 
      } else if (pivot == -1) {
         pivot = s; 
         continue; 
      }
   }
   if(!ok) cout << 0 << "\n";
   else if (pivot != 1) { // if possible there can only 1 arrangement
      // long long ans = 1; 
      int ok2 = 1; 
      FOR(i, 0, N-1) {
         if (B[i] == -1) { 
            int d = pivot - A[i];
            // cout << "d: " << d << "\n";
            if (d > K) { 
               ok2 = 0; 
               break; 
            }
         }
      }
      if(!ok2) cout << 0; 
      else cout << 1; 
      cout << "\n";
   } else { 
      int m = *max_element(all(A)); 
      int d = K - m;
      cout << d << "\n";
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