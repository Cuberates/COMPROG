#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "../debug.h"
#include "../template.h"
#endif

using namespace std;

#define ll long long

void gabagoo() {  
  int n; cin >> n; 
  string s; cin >> s; 
  
  vector<int> a, b;
  for(int i = 0; i < s.length(); i++) { 
    if (s[i] == 'a') a.push_back(i);
    if (s[i] == 'b') b.push_back(i);
  }

  int mid_a = a.size()/2, mid_b = b.size()/2;
  long long cost_a = 0, cost_b = 0;
  for(int i = 0; i < a.size(); i++) { 
    int num_shifts = abs(a[i] - a[mid_a]);
    // We don't have to do num_shifts operations
    // Since the block extends
    int deductions = abs(mid_a-i); 
    cost_a += (num_shifts - deductions); 
  }
  for(int i = 0; i < b.size(); i++) { 
    int num_shifts = abs(b[i] - b[mid_b]);
    // We don't have to do num_shifts operations
    // Since the block extends
    int deductions = abs(mid_b-i); 
    cost_b += (num_shifts - deductions); 
  }
   
  cout << min(cost_a, cost_b) << "\n";
} 

int main(void) { 	
  ios_base::sync_with_stdio(false);
  cin.tie(0); 
  int tests = 1;
  cin >> tests; 
  for(int i = 1; i <= tests; i++) 
    gabagoo();
}
