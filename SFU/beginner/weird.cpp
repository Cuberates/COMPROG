#include <iostream>
#include <vector>
#include <map> 
#include <algorithm>

using namespace std;

int main() { 
  string s; 
  map<string, int> cnt; 

  int ans = true; 
  while (cin >> s) {
    if (cnt[s] <= 0) continue;
    else ans = false; 
  }

  if (ans) cout << "YES";
  else cout << "NO";
  
}