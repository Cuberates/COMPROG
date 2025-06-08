#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "template.h"
#endif

using namespace std;

#define ll long long

void gabagoo() {
  int m; 
  cin >> m; 
  for(int i = 0; i < 2*m+1; i++) {
    if (i < m) {
      if (i == 0) cout << "*";
      else if (i == m-1) cout << "*";
      else cout << " ";
    } else { 
      if (i == m) cout << " ";
      else cout << "*";
    }
  }
  cout << "\n";
  // reverse(top.begin(), top.end()); 
  for(int j = 0; j < m-2; j++) {
    for(int i = 0; i < 2*m+1; i++ ) {
      if (i <= 0 || i == m-1 || i == m+1 || i >= 2*m) 
        cout << "*";
      else cout << " ";
    } 
    cout << "\n";
  }  
  // cout << top << "\n";
  // cout << "\n";
  for(int i = 0; i < 2*m+1; i++) {
    if (i < m) {
      cout << "*";
    } else { 
      // if (i == m) cout << " ";
      // else cout << "*";
      // if (i == 0) cout << "*";
      if (i == m+1 || i == 2*m) cout << "*";
      else cout << " ";
    }
  }
  cout << "\n";
}  

int main(void) { 	
  ios_base::sync_with_stdio(false);
  cin.tie(0); 
  int tests = 1;
  // cin >> tests; 
  for(int i = 1; i <= tests; i++) 
    gabagoo(); 
  
}
