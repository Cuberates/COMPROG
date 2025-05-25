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
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
      cin >> a[i];
   }
   sort(a.begin(), a.end());
   int ans = 1e9; 
   for(int i = 0; i < n; i++) { 
      for(int j = i; j < n; j++) {
         if ((a[i] + a[j]) % 2 == 0) {
            int l = n-j; 
            int r = i; 
            // cout << l << " " << r << "\n";
            ans = min(ans, l + r);
         } else continue;
      }
   }
   cout << ans-1 << "\n";
}

int main(void) { 	
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   int tests = 1;
   cin >> tests;
   for(int i = 1; i <= tests; i++) 
      gabagoo(); 
   
}
