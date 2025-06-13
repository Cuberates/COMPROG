#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "../template.h"
#endif

using namespace std;

#define ll long long

void gabagoo() {
  int n; string s; 
  cin >> n >> s; 
  vector<int> t1(n), t2(n);  
  vector<int> c1('z'+1), c2('z'+1);
  for(int i = 0; i < n; i++) {
    // if (c1[s[i]-'a'])
    if (!c1[s[i]-'a']) {
      t1[i] = 1 + (i > 0 ? t1[i-1] : 0); 
      c1[s[i]-'a'] = 1; 
    } else t1[i] = t1[i-1]; 
    if (!c2[s[n-i-1]-'a']) {
      t2[i] = 1 + (i > 0 ? t2[i-1] : 0);
      c2[s[n-i-1]-'a'] = 1; 
    } else t2[i] = t2[i-1];
  }
  int ans = -1; 
  for(int i = 0; i < n-1; i++) {
    ans = max(ans, t1[i] + t2[n-i-2]); 
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
