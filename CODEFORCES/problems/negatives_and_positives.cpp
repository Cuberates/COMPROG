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
   int cnt = 0; 
   ll sum = 0; 
   for(int i = 0; i < n; i++) {
      if (a[i] < 0) { 
         cnt++;
         a[i] *= (-1);
      }
      sum += a[i];
   }
   int r = (cnt % 2) == 0;
   sort(a.begin(), a.end());
   cout << (r ? sum : sum -= (2 * a[0])) << "\n";
}

int main(void) { 	
   ios_base::sync_with_stdio(false);
   cin.tie(0); 
   int tests = 1;
   cin >> tests; 
   for(int i = 1; i <= tests; i++) 
      gabagoo(); 
   
}