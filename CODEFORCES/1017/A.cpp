#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "../template.h"
#endif
using namespace std;

#define ll long long

void gabagoo() { 
   string s; 
   // cin >> s;
   getline(cin, s); 
   for(int i = 0; i < s.length(); i++) { 
      if (i <= 0) cout << s[i]; 
      else if (s[i] == ' ') cout << s[i+1]; 
   }
   cout << "\n";
}  

int main(void) { 	
   ios_base::sync_with_stdio(false);
   cin.tie(0); 
   cout.tie(0); 
   int tests = 1;
   cin >> tests; 
   for(int i = 1; i <= tests + 1; i++) 
      gabagoo(); 

}