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
#include <deque> 
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
#define pf              push_front
#define all(x)          (x).begin(), (x).end()
#define len(x)          (x).length() 
#define size(x)         (x).size()

string to_bin (int n, ll val) { 
   string res = ""; 
   if (val == 0) { 
      FOR(i, 0, n-1) 
         res.pb('0');
      return res; 
   }
   
   while (val || n > 0) { 
      int rem = (val % 2); 
      res.pb(rem + '0'); 
      val /= 2; 
      n--;
   }
   return res; 
}

void gabagoo() {
   int N; 
   cin >> N; 
   // vect<int> ans; 
   vect<vect<string > > ans; 
   int ok = 0; 
   int i = 0; 
   FOR(k, 0, pow(2, N)-1) {
      // cout << "k = " << k << " " << pow(2, floor(log(k) / log(2))) << "\n"; 
      vect<string> g; 
      if(pow(2, floor(log(k + 1) / log(2))) == k) {
         // Not in the form of 2^k
         // i++;
         ans.push_back(g);
         ans[i].pb(to_bin(N, k));
      } else ans[i].pb(to_bin(N, k)); 
   }
   for(auto v : ans) {
      for(auto s : v) {
         cout << s << "\n";
      }
      cout <<"-----\n";
   }
}

int main(void) { 	
   IO(); // disable synchronization  
   int tests = 1;
   // cin >> tests; 
   FOR(i, 1, tests) { 
      gabagoo(); 
   }	
}


/**
 * 11
 * 10
 * 00
 * 01
 * 
 * 
 * 
 * 
 */
