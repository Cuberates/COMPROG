#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "../template.h"
#endif

using namespace std;

#define ll long long

void gabagoo() { 
   ll x; 
   cin >> x;

   ll c1 = 0, c2 = 0, c3 = 0; 
   ll ans = 0; 
   while (min(c1, min(c2, c3)) < x) { 
      if (c1 <= c2 && c1 <= c3) { 
         c1 = min(c2, c3) * 2 + 1; 
      } else if (c2 <= c1 && c2 <= c3) {
         c2 = min(c1, c3) * 2 + 1; 
      } else c3 = min(c2, c1) * 2 +1; 
      ans++; 
   }
   cout << ans << "\n";
}   

int main(void) { 	
   ios_base::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);  
   int tests = 1;
   cin >> tests; 
   for(int i = 1; i <= tests; i++) 
      gabagoo(); 
   
}
