#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "../template.h"
#endif

using namespace std;

#define ll long long

void gabagoo() {
  int n; cin >> n; 
  vector<int> a(n);
  for(int i = 0; i < n; i++) 
    cin >> a[i];
  vector<int> pref_min(n), suff_max(n);
  for(int i = 0; i < n; i++) {
    if (i <= 0) { 
      pref_min[i] = a[i];
      suff_max[i] = a[n-i-1];
      continue;
    }
    pref_min[i] = min(a[i], pref_min[i-1]);
    suff_max[i] = max(a[n-i], suff_max[i-1]); 
  }
  map<int,int> cnt; 
  for(int i = 0; i < n; i++) { 
    cnt[pref_min[i]]++; 
    cnt[suff_max[i]]++;
  }
  for(int i = 0; i < n; i++) { 
    if (cnt[a[i]]) cout << 1; 
    else cout << 0; 
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
