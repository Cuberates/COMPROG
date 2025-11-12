#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;
const uint64_t INF = 1000001;

void useIO() { 
	ios_base::sync_with_stdio(false); 
	cin.tie(0); cout.tie(0);
}

int main() { 
   useIO(); 
   int num; 
   cin >> num;
   vector<int> dp(num + 1, INF);

   for(int sp = 0; sp <= num; sp++) { 
      if (sp == 0) { 
         dp[sp] = 0;
         continue;
      }
      // Going through all digits
      for (int curr_num = sp; curr_num > 0; curr_num /= 10) { 
         int digit = curr_num % 10;
         dp[sp] = min(dp[sp], dp[sp-digit]+1);
      }
   }
   cout << dp[num];
}
