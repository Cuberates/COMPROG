#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "../template.h"
#endif

using namespace std;

#define ll long long
#define vt vector

void gabagoo() {
  int n; 
  cin >> n; 
  vt<vt<int> > A(n, vt<int>(n));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      A[i][j] = j+1; 
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; i++) {
      cout << A[i][j] << " "; 
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
