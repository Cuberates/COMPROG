#include <iostream>
#include <vector>

using namespace std;

// int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
//   int ans = 0;  
//   for(int i = 0; i < grumpy.size() - minutes + 1; i++) { 
//     int total = 0; 
//     vector<int> temp;
//     for(int j = i; j < i + minutes; j++) { 
//       temp.push_back(grumpy[j]);
//       grumpy[j] = 0; 
//     } 
//     for(int j = 0; j < customers.size(); j++) {
//       total += (grumpy[j] == 0 ? customers[j] : 0);
//     }
//     // cout << "Total: " << total << "\n";
//     for(int j = 0; j < grumpy.size(); j++) { 
//       cout << grumpy[j] << " ";
//     }
//     cout << "\n";
//     for(int j = i, k = 0; j < i + minutes; j++, k++) {
//       grumpy[j] = temp[k];
//     } 
//     ans = max(ans, total); 
//   }
//   return ans; 
// }

int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
  int ans = 0;  
  for(int i = 0; i < grumpy.size() - minutes + 1; i++) { 
    int total = 0; 
    vector<int> temp;
    for(int j = i; j < i + minutes; j++) { 
      temp.push_back(grumpy[j]);
      grumpy[j] = 0; 
    } 
    for(int j = 0; j < customers.size(); j++) {
      total += (grumpy[j] == 0 ? customers[j] : 0);
    }
    // cout << "Total: " << total << "\n";
    for(int j = 0; j < grumpy.size(); j++) { 
      cout << grumpy[j] << " ";
    }
    cout << "\n";
    for(int j = i, k = 0; j < i + minutes; j++, k++) {
      grumpy[j] = temp[k];
    } 
    ans = max(ans, total); 
  }
  return ans; 
}

int main(void) {
  vector<int> customers = {1};
  vector<int> grumpy = {0};
  int minutes = 1; 
  cout << maxSatisfied(customers, grumpy, minutes);
}