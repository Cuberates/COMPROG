#include <bits/stdc++.h>

using namespace std;

#define vect vector

int main(void) {
    string s, t; 
    cin >> s >> t; 
    int ns = s.length(), nt = t.length();
    vect<vect<int> > dp(ns+1, vect<int>(nt+1, 0));
    for(int i = 0; i <= ns; i++) { 
        for(int j = 0; j <= nt; j++) { 
            if(i > 0 && j > 0) {
                if(s[i-1] == t[j-1]) dp[i][j] = 1 + dp[i-1][j-1]; 
                else dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
    }
    string ans = "";
    while(nt > 0 && ns > 0) {
        if(s[ns-1] == t[nt-1]) {
            ans += t[nt-1];
            ns--; 
            nt--; 
        } else {        
            if(dp[ns][nt] == dp[ns][nt-1]) nt--; 
            else if(dp[ns][nt] == dp[ns-1][nt]) ns--; 
        }
    }
    reverse(ans.begin(), ans.end()); 
    cout << ans << "\n";
}