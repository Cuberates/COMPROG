#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "../template.h"
#endif

using namespace std;

#define ll long long
#define pii pair<int,int> 

vector<pii> o; 
vector<int> d; 
int n; 

void gabagoo() {
   cin >> n; 
   d = vector<int>(n);
   for(int i = 0; i < n; i++)
      cin >> d[i];
   o = vector<pii>(n);
   vector<int> lb(n), ub(n);
   for(int i = 0; i < n; i++) { 
      int l, r; 
      cin >> l >> r; 
      lb[i] = l; 
      ub[i] = r; 
   }
   int L = 0, R = 0; 
   stack<int> st; 
   int ok = true; 
   for(int i = 0; i < n && ok; i++) {
      if (L < lb[i]) {
         L = lb[i];
         st.push(1);
      } else st.push(0);
      if (R > ub[i]) {
         R = ub[i];
         st.push(0);
      } else st.push(0); 
      if (L > R) ok = false; 
   }
   if(!ok) cout << "-1\n";
   else { 
      while (!st.empty()) {
         cout << st.top() << " ";
         st.pop(); 
      }
      cout << "\n";
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
