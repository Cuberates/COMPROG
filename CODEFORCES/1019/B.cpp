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
   int N; 
   string S;
   cin >> N >> S; 
   int sw = 0;  
   int state = 0;
   FOR(i, 0, N-1) { 
      int c = S[i] - '0';
      if (c != state) { 
         sw++; 
         state = c; 
      } else continue;
   }
   int ans = sw + N;
   if (sw <= 1) { ans += 0; }
   else if (sw <= 2) { ans --; } 
   else ans -= 2;
   cout << ans << "\n";
}  

int main(void) { 	
   IO(); // disable synchronization  
   int tests = 1;
   cin >> tests; 
   FOR(i, 1, tests) { 
      gabagoo(); 
   }	
}

/*

S = "0...01...1" => Perform at most 1 switch
S = "1...10...0" => Make a switch at the beginning => Must perform at least 1 switch

// Lowerbound of teh answer is N + (some no. switches)
// Minimize no. switches

Suppose we have S, which requires K switches.
If reverse some substring of S, how will K change? 

S = "00011001" => Require K = 3 swithes
S(1) = "10011000" => K + 1

After changing S, K will increase or decrease by at most 1?

1111101111

*/