#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;

void useIO() { 
	ios_base::sync_with_stdio(false); 
	cin.tie(0); cout.tie(0);
}

int main() { 
	useIO(); 
	int num_coins, target; 
	cin >> num_coins >> target;
	vector<int> coins(num_coins, 0);
	for(int i = 0; i < num_coins; i++) { 
		cin >> coins[i];
	}
   sort(coins.begin(), coins.end());  
   reverse(coins.begin(), coins.end()); 
   vector<int> dp(target + 1, 0); 
   for(int c = 0; c < num_coins; c++) { 
      for(int state = 0; state <= target; state++) { 
         if (state == 0) dp[state] = 1; 
         else { 
             if (coins[c] > state) continue;
             int sub_state =  state - coins[c];
             dp[state] = (dp[state] + dp[sub_state]) % MOD; 
         }
      }
   }

   cout << dp[target] << "\n";
   
}
