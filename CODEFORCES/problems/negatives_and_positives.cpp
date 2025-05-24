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

   if (n <= 2) {
      if (a[0] < 0 && a[1] < 0) {
         cout << abs(a[0]) + abs(a[1]) << "\n";
         return; 
      }
      if (a[0] < 0 && a[1] > 0) {
         if (abs(a[0]) > a[1]) { 
            cout << abs(a[0]) - a[1] << "\n";
            return; 
         }
         cout << a[1] - a[0] << "\n";
         return; 
      }
      if (a[0] > 0 && a[1] < 0) { 
         swap(a[0], a[1]);
         if (abs(a[0]) > a[1]) { 
            cout << abs(a[0]) - a[1] << "\n";
            return; 
         }
         cout << a[1] - a[0] << "\n";
         return; 
      }
      cout << a[0] + a[1] << "\n";
      return; 
   }

   
   for(int i = 0; i < n - 3; i++) {
      if (a[i] < 0) { 
         if(a[i+1] < 0) {
            a[i] *= -1;
            a[i+1] *= -1; 
            continue;
         } else if (a[i+2] < 0) {
            a[i] *= -1; 
            a[i+2] *= -1; 
         } else {
            int m = i;  
            for(int j = i; j < i+3; j++) {
               if (abs(a[j]) < abs(a[m]))
                  m = i+j;
            }
            for(int j = i; j < i+3; j++) {
               if (j != m) a[j] = abs(a[j]);
               else a[j] = -abs(a[j]);
            }
         }  
      } else continue;
   }
   ll ans = 0; 
   for(int i = 0; i < n; i++) 
      ans += a[i];
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


/*
pos pos pos pos neg neg





*/