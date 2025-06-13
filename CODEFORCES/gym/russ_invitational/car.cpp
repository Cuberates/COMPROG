#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "template.h"
#endif

using namespace std;

#define ll long long

void gabagoo() {
  ll x, y, z, t, v; 
  cin >> x >> y >> z >> t >> v; 
  ll c1 = x; 
  ll c2 = t * y; 
  ll c3 = z * v; 
  cout << min(c1, min(c2 , c3)) << "\n";
}  

int main(void) { 	
  ios_base::sync_with_stdio(false);
  cin.tie(0); 
  int tests = 1;
  // cin >> tests; 
  for(int i = 1; i <= tests; i++) 
    gabagoo(); 
  
}
