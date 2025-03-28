#include <bits/stdc++.h> 

using namespace std;

int n, *a;

void gabagoo() { 
    cin >> n; 
    a = new int[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> tools = {0, 1, 2}; 
    int ans = -1; 
    do { 
        vector<int> ord(3);
        for(int i = 0; i < 3; i++) { 
            ord[i] = tools[i];
        }
        vector<int> dp(n, 1e9);
        for(int i = 0; i < n; i++) { 
            int l = 0, r = n-1;             
            while(r - l > 1) { 
                int mid = (l + r) / 2; 
                if(dp[mid] == 1e9) l = mid; 
                else if(ord[dp[mid]] < ord[a[i]]) l = mid; 
                else r = mid; 
            }
            dp[l] = a[i];
        }
        
    } while(next_permutation(tools.begin(), tools.end())); 
    cout << ans << "\n";

}

int main(void) { 
    gabagoo(); 

    // vector<int> vec = {0, 0, 1, 1, 0, 2, 2, 1, 0};

    // vec<int> ord{1, 0, 2};

    // auto it = lower_bound(vec.begin(), vec.end(), [&](int a, int b) {
    //     return ord[a] < ord[b];
    // });
}

// 1 2 3 4 5
// 1 3 2 5 4