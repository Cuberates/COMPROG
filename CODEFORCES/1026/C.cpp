#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "../template.h"
#endif

using namespace std;

#define ll long long
#define pii pair<int,int> 

vector<pii> o; 
vector<int> p, t; 
int n; 

int check() {
   int h = 0; 
   for(int i = 0; i < n; i++) {
      // if(i > 0) h += (t[i] - t[i-1]);
      h += (t[i]);
      // cout << h << " " << o[i].first << " " << o[i].second << "\n";
      if (h >= o[i].first && h <= o[i].second) continue; 
      else if (h < o[i].first) return 0; 
      else return -1; 
   }
   return 1; 
}
void construct(int v) {
   t = p; 
   for(int i = 0; i < t.size(); i++) {
      if (t[i] == -1 && i <= v) t[i] = 1; 
      else if (t[i] == -1 && i > v) t[i] = 0;
   }
}
void gabagoo() {
   cin >> n;  
   p = vector<int>(n);
   for(int i = 0; i < n; i++) 
      cin >> p[i];
   o = vector<pii>(n);
   for(int i = 0; i < n; i++) { 
      int l, r; 
      cin >> l >> r; 
      o[i] = {l, r};  
   }
   int lb = -1, ub = n+1; 
   int good = 0;
   while (lb <= ub) {
      int mid = (lb + ub) / 2; 
      construct(mid); 
      int c = check(); 
      if (c > 0) { 
         good = 1; 
         break; 
      }
      else if (c == 0) { lb = mid + 1; }
      else {ub = mid - 1; }

      for(int i = 0; i < n; i++) { 
         cout << t[i] << " "; 
      }
      cout << "\n";
   }
   if (good) {
      for(int i = 0; i < n; i++)
         cout << t[i] << " "; 
      cout << "\n";
   } else cout << "-1 \n";
}    

int main(void) { 	
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   int tests = 1;
   cin >> tests;
   for(int i = 1; i <= tests; i++) 
      gabagoo(); 
   
}
