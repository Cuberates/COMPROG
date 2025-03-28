#include <iostream> 
#include <vector> 
#include <string> 
#include <cmath> 
#include <map>
#include <set> 

using namespace std;

int main(void) { 
   long long ans = 0; 
   vector<long long> left, right; 
   int a, b;
   
   while(cin >> a >> b) { 
      left.push_back(a);
      right.push_back(b);
   }

   sort(left.begin(), left.end());
   sort(right.begin(), right.end());

   for(int i = 0; i < left.size(); i++) {
      ans += abs(left[i] - right[i]);
   }

   cout << ans << "\n";
}
