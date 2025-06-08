#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "../template.h"
#endif

using namespace std;

#define ll long long

void gabagoo() {
   string s; cin >> s; 
   int k = stoi(s);
   if (floor(sqrt(k)) * floor(sqrt(k)) != k) cout << "-1 \n";
   else cout << 0 << " " << sqrt(k) << "\n";
}  

int main(void) { 	
   ios_base::sync_with_stdio(false);
   cin.tie(0); 
   int tests = 1;
   cin >> tests; 
   for(int i = 1; i <= tests; i++) 
      gabagoo(); 
   
}
