#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "../template.h"
#endif

using namespace std;

#define ll long long

const int inf = 1e9; 

void gabagoo() {
  int a, b, x, y; 
  cin >> a >> b >> x >> y; 
  // cannot be possible if b - a >= 2; 
  if (a - b >= 2) cout << -1 << "\n";
  else { 
    // do it greedily
    ll ans = 0; 
    while (a <= b) { 
      if ((a^1) > a && y <= x) { // always go for the xor
        // a++; 
        ans += y; 
      } else { 
        // a++;  
        ans += x;
      }
      a++; 
    }
    cout << ans << "\n";
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


/**
 * 10
 * 01
 * 11
 */