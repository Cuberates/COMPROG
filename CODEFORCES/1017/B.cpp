#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "../template.h"
#endif
using namespace std;

#define ll long long

void gabagoo() { 
   int n, m, l, r; 
   cin >> n >> m >> l >> r; 
   
   if (m < abs(l)) cout << -m << " " << 0 << "\n";
   else cout << l << " " << m-abs(l) << "\n";
}  

int main(void) { 	
   ios_base::sync_with_stdio(false);
   cin.tie(0); 
   cout.tie(0); 
   int tests = 1;
   cin >> tests; 
   for(int i = 1; i <= tests; i++) 
      gabagoo(); 

}