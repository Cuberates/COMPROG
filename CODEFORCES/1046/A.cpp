// Problem: https://codeforces.com/contest/2136/problem/A

#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "../template.h"
#endif

using namespace std;

#define ll long long

const int inf = 1e9; 

void gabagoo() { 
   int a, b, c, d; 
   cin >> a >> b >> c >> d; 
   // Suppose team 1 gets x points then team 2 gets at most 2*x+2 points 
   // ????
   ll h1 = max(a, b), h2 = min(a, b);
   if (h1 <= 2 * h2 + 2) {
      ll h3 = max(c-a, d-b), h4 = min(c-a, d-b); 
      if (h3 <= 2 * h4 + 2) cout << "YES \n";
      else cout << "NO \n";
   } else cout << "NO \n";
}

int main(void) { 
   ios_base::sync_with_stdio(false);
   cin.tie(0); 
   int tests = 1;
   cin >> tests; 
   for(int i = 1; i <= tests; i++) 
      gabagoo(); 
   
}

