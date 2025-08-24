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
  for(int i = 0; i < n; i++) { 
    cin >> a[i];
  }
  int ok = true;
  for(int i = 0; i < n-1; i++) { 
    int diff = abs(a[i] - a[i+1]);
    if (diff != 5 && diff != 7) ok = false; 
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
