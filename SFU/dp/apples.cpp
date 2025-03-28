#include <bits/stdc++.h>

using namespace std;

#define ll long long

int n; 
vector<ll> a; 

ll sol(int i, ll g1 = 0, ll g2 = 0) { 
    if(i < 0) return abs(g1 - g2);

    ll ans1 = sol(i - 1, g1 + a[i], g2);
    ll ans2 = sol(i - 1, g1, g2 + a[i]);

    return min(ans1, ans2);
}
    
int main() { 
    cin >> n; 
    a = vector<ll>(n); 
    for(int i = 0; i < n; i++) { 
        cin >> a[i];
    }
    cout << sol(n-1) << "\n";
}