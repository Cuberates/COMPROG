#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() { 
  int N; cin >> N;
  vector<int> A(N);
  for(int i = 0; i < N; i++) {
    cin >> A[i];
  }

  map<int,int> cnt; 
  for(int x : A) { 
    cnt[x]++; 
  }
  int ans = 0; 
  bool possible = 1; 
  for(auto u : cnt) {
    // cout << x.first << " " << x.second << "\n";
    int x = u.first; 
    int cntx = u.second; 
    cout << cntx << " " << x << "\n";
    if (cntx < x) ans += cntx; 
    else ans += cntx-x;
  }
  // if (!possible) { 
  //   cout << "NO";
  //   return 0;
  // }
  cout << ans << "\n";


}