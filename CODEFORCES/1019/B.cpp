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

int N; string S; 

int cost(string S) { 
   int res = 0; 
   FOR(i, 0, N-1) {
      if (i == 0) {
         res++; 
      } else if (S[i] != S[i-1]) {
         res+=2; 
      } else res++;
   }
   return res;
}

pii max_group (int l, int r, char k) {
   int lb = -1, ub = -1; 
   int cur_len = -1; 
   FOR(i, l, r) {
      if (S[i] == k) {
         int len = 0; 
         int j = i; 
         for(;j <=r; j++) {
            if(S[j] != k) break;
            len++; 
         }
         if (len > cur_len) {
            lb = i; 
            ub = j-1; 
            cur_len = len;
         }
      }
   }
   return make_pair(lb, ub);
} 

void gabagoo() {
   // int N; string S; 
   cin >> N >> S;
   
   
   string S1 = S; 
   pii g00 = max_group(0, N-1, '0');
   pii g01 = max_group(0, g01.first - 1, '0');
   pii g02 = max_group(g01.second + 1, N, '0');

   if (g01.second - g01.first < g02.second - g02.first) {
      
   } else { 

   }

   int cost1 = cost(S); 

   pii g10 = max_group(0, N-1, '0');
   pii g11 = max_group(0, g11.first - 1, '0');
   pii g12 = max_group(g11.second + 1, N, '0');
 
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
 * 0. The idea is you want to minimize moving buttons
 * 1. Ideally you want all the symbols to be grouped together
 * 2. Do we just take the longest substring and merge it with the second longest? 
 * 
 * 10001010000
 * 11010000000
 *
 * 1 10 1000010010  
 * 
 */