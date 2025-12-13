#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "../template.h"
#include "../debug.h"
#endif

using namespace std;

#define ll long long
string s; 
int q; 

void gabagoo() {  
  cin >> s >> q; 
  int n = s.length();
  vector<pair<int,int> > qq(q); 
  for(int i = 0; i < q; i++) {
    int u, v; cin >> u >> v; 
    qq[i] = make_pair(u, v); 
  }
  vector<int> g(n);
  int cnt = 0; 
  for(int i = 0; i < n; i++) { 
    int ok = (i+3<n) && (s[i] == '1' && s[i+1] == '1' && s[i+2] == '0' && s[i+3] == '0'); 
    if (ok) { 
      cnt++; 
      g[i] = 1; 
    } else continue; 
  }
  // debug(g, cnt);
  vector<int> a;
  for(int i = 0; i < q; i++) {
    int u = qq[i].first-1, v = qq[i].second+'0';
    s[u]=v;
    for(int j=u;j>=u-3;j--) { 
      if (j >= 0 && g[j]) { g[j] = 0; cnt--; }
    }
    for(int j=u; j>=u-3; j--) { 
      int ok = (j >= 0 && j+3<n) && (s[j] == '1' && s[j+1] == '1' && s[j+2] == '0' && s[j+3] == '0');
      if (ok) { 
        g[j] = 1; 
        cnt++; 
        break;
      }
    }
    a.push_back(cnt > 0);
  }
  for(int i = 0; i < a.size(); i++) { 
    cout << (a[i] ? "YES" : "NO") << "\n";
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



/***
 * 111000000
 * 000000000 cnt will stay the same
 * 
 * 4 segments: (i-3, i-2, i-1, i)
 */