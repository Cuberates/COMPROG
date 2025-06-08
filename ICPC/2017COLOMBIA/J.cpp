#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "template.h"
#endif

using namespace std;

#define ll long long
const int inf = 3e7;

void gabagoo() {
  int n, m, q; 
  cin >> n >> m >> q;   
  vector<int> a(n); 
  vector<int> cnt(inf+1);
  for(int i = 0; i < m; i++) {
    cin >> a[i];
    cnt[a[i]]++; 
  }
  for(int i = m; i < n; i++) {
    a[i] = (a[i-m] + a[i-m+1]) % inf;
    cnt[a[i]]++; 
  }
  vector<int> sorted; 
  for(int i = 0; i <= inf; i++) {
    if (cnt[i] > 0) { 
      for(int j = 0; j < cnt[i]; j++)
        sorted.push_back(i);
    } else continue; 
  }
  vector<int> ans; 
  for(int i = 0; i < q; i++) {
    int x; cin >> x; 
    ans.push_back(sorted[x-1]); 
  }
  for(int i = 0; i < ans.size(); i++)
    cout << ans[i] << "\n";  
}

int main(void) { 	
  ios_base::sync_with_stdio(false);
  cin.tie(0); 
  int tests = 1;
  // cin >> tests; 
  for(int i = 1; i <= tests; i++) 
    gabagoo(); 
  
}