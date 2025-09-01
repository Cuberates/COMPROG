/*https://codeforces.com/problemset/problem/1832/B*/

#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "../template.h"
#endif

using namespace std;

#define ll long long

vector<ll> ps; 
vector<ll> a;
int n, k; 

void build() {
   ps = vector<ll>(n+1); 
   for(int i = 1; i <= n; i++) {
      ps[i] = ps[i-1] + a[i-1];
   }
}

ll query(int left, int right) {
   ll pref = ps[left]; 
   ll suff = ps[n-right];  
   return suff - pref; 
}

void gabagoo() {
   cin >> n >> k; 
   a = vector<ll>(n);
   for(int i = 0; i < n; i++)
      cin >> a[i];
   sort(a.begin(), a.end()); 
   build();  
   ll ans = -1;  
   for(int l = 0; l <= n; l++) {
      int r = k - (l / 2); 
      if (r >= 0 && l % 2 == 0 && l / 2 + r == k)
         ans = max(ans, query(l, r));

   }
   cout << ans << "\n";
}

int main(void) { 	
   ios_base::sync_with_stdio(false);
   cin.tie(0); 
   int tests = 1;
   cin >> tests; 
   for(int i = 1; i <= tests; i++) 
      gabagoo(); 
   
}
