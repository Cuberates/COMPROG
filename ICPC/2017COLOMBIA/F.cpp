#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "template.h"
#endif

using namespace std;

#define ll long long

int check(ll a, ll b, ll c) { 
  return (a + b > c && a + c > b && b + c > a);
}

void gabagoo() {
  int n; cin >> n; 
  int ok = true; 
  for(int i = 0; i < n; i++) { 
    ll a, b, c; 
    cin >> a >> b >> c; 
    ok *= check(a, b, c);
  }
  cout << (ok ? "YES" : "NO") << "\n";
}  

int main(void) { 	
  ios_base::sync_with_stdio(false);
  cin.tie(0); 
  int tests = 1;
  // cin >> tests; 
  for(int i = 1; i <= tests; i++) 
    gabagoo();   
}
