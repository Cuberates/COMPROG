#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "../template.h"
#include "../debug.h"
#endif

using namespace std;

#define ll long long

void gabagoo() {
   int n, k; 
   cin >> n >> k;
   string s; cin >> s; 
   int cnt0 = 0, cnt1 = 0; 
   for(int i = 0; i < s.length(); i++) {
      cnt0 += (s[i] == '0');
      cnt1 += (s[i] == '1');
   }
   int p0 = cnt0 / 2, p1 = cnt1 / 2; 
   if (p0 + p1 < k) cout << "NO \n";
   else if (p0 + p1 == k) cout << "YES \n";
   else { 
      if (p0 >= p1) {
         if (p0 - k >= 0) p0 -= k; 
         else { p0 = 0; p1 -= (k - p0);}
      } else { 
         if (p1 - k >= 0) p1 -= k; 
         else { p1 = 0; p0 -= (k - p1);}
      }
      int r0 = (2 * p0) + (cnt0 % 2 != 0);
      int r1 = (2 * p1) + (cnt1 % 2 != 0);
      int mn = min(r0, r1);
      int mx = max(r0, r1);
      mx -= mn; 
      mn = 0; 
      if (mx >= 2) cout << "NO \n";
      else cout << "YES \n";
   }
} 
int main(void) { 	
   ios_base::sync_with_stdio(false);
   // cin.tie(0); 
   int tests = 1;
   cin >> tests; 
   for(int i = 1; i <= tests; i++) 
      gabagoo(); 
}
