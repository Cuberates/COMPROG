#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;

int main(void) { 
    int n; cin >> n;
    int dp[1000001];
    memset(dp, 0, sizeof(dp)); 
    dp[0] = 1; 
    for(int i = 1; i <= n; i++) { 
        for(int dice = 1; dice <= 6; dice++) {
            if (i - dice >= 0) dp[i] = (dp[i] + dp[i-dice]) % MOD;
        }
    }
    cout << dp[n] << "\n";
}