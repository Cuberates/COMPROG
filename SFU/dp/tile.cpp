#include <bits/stdc++.h> 

using namespace std;

#define vect vector

int main(void) { 
    int n, m; 
    cin >> n >> m;  
    vect<vect<int> > dp(n+1, vect<int>(m+1, 0));    
    for(int i = 1; i <= n; i++) { 
        for(int j = 1; j <= m; j++) { 
            if(i == 1 && j == 1) dp[i][j] = 0; 
            else if(i == 1 && j == 2) dp[i][j] = 1;
            else if(i == 2 && j == 1) dp[i][j] = 1;
            else { 
                if(i % 2 == 0) dp[i][j] = d
            }
        }
    }
}
