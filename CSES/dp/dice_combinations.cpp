#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
 
const int MMOD = 1e9+7, MAXN = 1e6; 

int main(void) {
    int N;
    cin >> N;
    vector<int> dp(N+1, 0);
    dp[0] = 1; 
    dp[1] = 1; 
    dp[2] = 2;
    for(int i = 3; i <= N; i++) {
    for(int j = 1; j <= 6; j++) {
        if (i - j >= 0) {
            dp[i] += dp[i-j]; 
            dp[i] %= MMOD; 
        }
    }
    }
    cout << dp[N] << "\n";

}