#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "../template.h"
#endif
using namespace std;

#define ll long long

void gabagoo() { 
   int n;
   cin >> n; 
   vector<vector<int> > g(n, vector<int>(n));
   for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) { 
      cin >> g[i][j];
   }
   int tot_sum = 2*n*(2*n+1)/2;

   vector<int> ans(2*n+1);
   for(int i = 1; i <= n; i++) { 
      for(int j = 1; j <= n; j++) { 
         ans[i+j-1] = g[i-1][j-1];
      } 
   }

   int sum = 0;
   for(int i = 0; i < 2*n; i++, sum += ans[i]); 
   int miss = tot_sum - sum; 
   ans[0] = miss; 
   for(int i = 0; i < 2*n; i++) 
      cout << ans[i] << " ";
   
   cout << "\n";

}  

int main(void) { 	
   ios_base::sync_with_stdio(false);
   cin.tie(0); 
   cout.tie(0); 
   int tests = 1;
   cin >> tests; 
   for(int i = 1; i <= tests; i++) 
      gabagoo(); 

}