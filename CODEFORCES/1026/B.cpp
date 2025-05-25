#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "../template.h"
#endif

using namespace std;

#define ll long long

int balanced(string s) {
   stack<int> st; 
   int open = 0, closed = 0, ok = 1; 
   for(int i = 0; i < s.length(); i++) {
      if (s[i] == '(') { 
         st.push(1);
         open++; 
      } else { 
         if (st.empty()) ok = 0;  
         else { 
            st.pop();
            open--; 
            if (open <= 0 && closed) ok = 0; 
            else if (open <= 0) closed = 1; 
         } 
      }
      cout << open << " " << closed << "\n";
   }
   // cout << open << " " << closed << "\n";
   return ok; 
}

void gabagoo() {
   string s;
   cin >> s;
   if (balanced(s)) cout << "NO \n";
   else cout << "YES \n";
}  

int main(void) { 	
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   int tests = 1;
   cin >> tests;
   for(int i = 1; i <= tests; i++) 
      gabagoo(); 
   
}
