#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#define vect vector
#define str string
#define ll long long
const int MOD = 1e9+7;
using namespace std;
   
int n = 1000; 
vect<vect<int> > dp(n, vect<int>(n, 0)); 
vect<str> gr(n);
 
void gabagoo() {
   cin >> n;
   for(int i = 0; i < n; i++) { 
      cin >> gr[i];
   }
   dp[0][0] = (gr[0][0] != '*' ? 1 : 0);
   for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
         if(gr[i][j] != '*') {
            if(i - 1 >= 0) 
               dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD; 
            if(j - 1 >= 0) 
               dp[i][j] = (dp[i][j] + dp[i][j-1]) % MOD; 
         }
      }
   }
   cout << dp[n-1][n-1] << "\n";
}
 
int main() { 
   ios_base::sync_with_stdio(NULL);
   cin.tie(0); cout.tie(0);
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
   #endif   
   int tt = 1; 
   // cin >> tt; 
   for(tt; tt > 0; tt--) 
      gabagoo();
}
 
