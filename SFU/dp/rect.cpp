#include <bits/stdc++.h>

using namespace std;

#define vect vector

vect<vect<int> > dp(501, vect<int>(501, 1e9)); 

int sol(int a, int b) { 
    if(dp[a][b] < 1e9) return dp[a][b]; 
    if(a == b) return dp[a][b] = 0;
    int ans1 = 1e9; 
    for(int i = 1; i <= a / 2; i++) {   
        ans1 = min(ans1, 1 + sol(i, b) + sol(a - i, b)); 
    }    
    int ans2 = 1e9; 
    for(int i = 1; i <= b / 2; i++) { 
        ans2 = min(ans2, 1 + sol(a, i) + sol(a, b - i));
    }   
    return (dp[a][b] = min(ans1, ans2));
}
int main(void) { 
    int a, b; 
    cin >> a >> b; 
    cout << sol(a, b) << "\n";
}