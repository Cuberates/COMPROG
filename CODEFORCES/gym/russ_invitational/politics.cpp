#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "template.h"
#endif

using namespace std;

#define ll long long

void gabagoo() {  
  ll a, b, c; 
  cin >> a >> b >> c;
  
  ll rooms = (a + b + c) / 3; 
  if (a / 2 >= rooms) {
    cout << a + b + c << "\n";
  } else { 
    // if (a % 2 == 0) cout << a + min(a/2, b+c) << "\n";
    // else cout << a-1 + (a/2) << "\n";
    // else cout << a + min(a/2, b+c) << "\n";
    if (a % 2 != 0 && (b == 0 || c == 0)) cout << a + a/2 - 1<< "\n";
    else cout << a + a/2 << "\n";
  }
}  

int main(void) { 	
  ios_base::sync_with_stdio(false);
  cin.tie(0); 
  int tests = 1;
  // cin >> tests; 
  for(int i = 1; i <= tests; i++) 
    gabagoo(); 
  
}
