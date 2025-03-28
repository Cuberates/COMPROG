#include <bits/stdc++.h>

using namespace std;

#define vect vector

int main(void) {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];
    vector<int> dp(n, 1e9); 
    for(int i = 0; i < n; i++) { 
        auto it = lower_bound(dp.begin(), dp.end(), a[i]); 
        *it = a[i];
    }
    int i = 0; 
    for(i; i < n && dp[i] != 1e9; i++); 
    cout << i << "\n";
}