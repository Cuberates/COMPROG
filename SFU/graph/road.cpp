#include <bits/stdc++.h>

using namespace std;

#define vect vector

vector<int> vis;
map<int,vector<int>> adj; 
int n, m;

void dfs(int u) { 
    if(vis[u]) return; 
    vis[u] = 1; 
    for(int v : adj[u]) { 
        dfs(v); 
    }
}
void gabagoo() { 
    cin >> n >> m; 
    vis = vector<int>(n+1, 0);
    for(int i = 0; i < m; i++) { 
        int a, b;
        cin >> a >> b; 
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> v; 
    for(int i = 1; i <= n; i++) { 
        if(!vis[i]) {
            v.push_back(i);
            dfs(i);
        }
    }   
    cout << v.size() - 1 << "\n";
    for(int i = 0; i < v.size() - 1; i++) { 
        cout << v[i] << " " << v[i+1] << "\n";
    }
}
int main(void) {    
    ios_base::sync_with_stdio(NULL);
    cin.tie(0); cout.tie(0);

    int tt = 1; 
    // cin >> tt; 
    for(tt; tt > 0; tt--) 
        gabagoo(); 
}