#include <bits/stdc++.h> 

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
ll dp[5000][5000][2];

#define rep(i,a,b) for(int i=a;i<(b);++i)

ll solve(vector<int> &A, int left, int right, pair<ll, ll> scores, bool player = false) { 
    if(right - left == 0) { 
        if(!player)
            scores.first += A[left];
        return scores.first; 
    }
    ll ans = dp[left][right][player]; 
    if(ans != 1e18) return ans; 
    if(player == 0) { 
        // Consider two choices
        auto RFScores = scores, RLScores = scores; 
        RFScores.first += A[left]; 
        RLScores.first += A[right];
        ll ans1 = solve(A, left + 1, right, RFScores, 1); 
        ll ans2 = solve(A, left, right - 1,  RLScores, 1); 
        return dp[left][right][0] = max(ans1, ans2); 
    } else { 
        auto RFScores = scores, RLScores = scores;  
        RFScores.second += A[left]; 
        RLScores.second += A[right];

        ll ans1 = solve(A, left + 1, right, RFScores, 0); 
        ll ans2 = solve(A, left, right - 1, RLScores, 0); 

        return dp[left][right][1] = min(ans1, ans2); 
    }
}

int main(void) { 
    int n; cin >> n; 
    vector<int> A(n);
    rep(i, 0, n) rep(j, 0, n) rep(k, 0, 2) dp[i][j][k] = 1e18;
    for(int i = 0; i < n; i++) { 
        cin >> A[i];
    }
    cout << solve(A, 0, n-1, {0,0}, 0) << '\n'; 
}