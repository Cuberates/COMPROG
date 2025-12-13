#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() { 
  int n; cin >> n; 
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  map<int,int> diff; 
  for(int i = 0; i < n-1; i++) {
    int d = abs(a[i]-a[i-1]);
    diff[d]++; 
  }
  bool ans = true;
  for(int i = 1; i <= n-1; i++) {
    if (diff[i] == 0) ans = false; 
  }
  if (ans) cout << "Jolly";
  else cout << "Not Jolly";
}