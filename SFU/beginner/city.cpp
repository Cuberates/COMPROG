#include <iostream>
#include <vector>
#include <set> 
#include <algorithm>

using namespace std;

int main() { 
  // set<int> s;
  int test_case;
  cin >> test_case;
  for(int i = 0; i < test_case; i++) { 
    int n; cin >> n; 
    set<string> s; 
    for(int j = 0; j < n; j++) { 
      string city; 
      cin >> city;
      s.insert(city);
    }
    cout << s.size() << "\n";
  }
}