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
   vector<int> p(n), q(n); 
   for(int i = 0; i < n; i++)
      cin >> p[i];
   for(int i = 0; i < n; i++)
      cin >> q[i];
   vector<pair<int,int>> dp(n);
   // ll m = (n-1)*n/2; 
   int mx = -1, mn = -1; 
   for(int i = 0; i < n; i++) {
      if (i <= 0) { 
         mx = max(p[0], q[0]); 
         mn = min(p[0], q[0]);
      }
   }
}  

int main(void) { 	
   ios_base::sync_with_stdio(false);
   cin.tie(0); 
   int tests = 1;
   cin >> tests; 
   for(int i = 1; i <= tests; i++) 
      gabagoo(); 
   
}


