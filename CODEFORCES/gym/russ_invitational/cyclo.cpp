#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "template.h"
#endif

using namespace std;

#define ll long long

void gabagoo() {
  int n; cin >> n; 
  vector<ll> a(n);
  for(int i = 0; i < n; i++) { cin >> a[i]; }
  sort(a.begin(), a.end()); 
  ll lb = 1, ub = n+1;
  while (ub - lb > 1) {
    ll l = (lb + ub) / 2; 
    int cnt = 0; 
    for(int i = 0; i < n; i++) {
      if (a[i] >= l) cnt++; 
    }
    if (cnt >= l) lb = l; 
    else ub = l;
  }
  cout << lb << "\n";
}

int main(void) { 	
  ios_base::sync_with_stdio(false);
  cin.tie(0); 
  int tests = 1;
  // cin >> tests; 
  for(int i = 1; i <= tests; i++) 
    gabagoo(); 
  
}
