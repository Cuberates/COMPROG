#include <bits/stdc++.h>
#include <iostream> 

using namespace std; 

int main(void) {
   int n, d; 
   cin >> n >> d; 
   vector<int> a(n);
   for(int i = 0; i < n; i++) cin >> a[i];
   sort(a.begin(), a.end());
   int ans = 1, cur = a[0]; 
   for(int i = 0; i < n; i++) {
      if(i > 0 && a[i] - cur > d) {
         ans++; 
         cur = a[i];
      }
   }
   cout << ans << "\n";
}