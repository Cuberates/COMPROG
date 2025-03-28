#include <bits/stdc++.h>

using namespace std;

#define vect vector
#define ll long long
#define pii pair<int, long long>

map<int,vect<pii>> adj; 

void gabagoo() { 
    int n, m;
    cin >> n >> m; 
    for(int i = 0; i < m; i++) { 
        int a, b, w; 
        cin >> a >> b >> w; 
        adj[a].push_back(make_pair(b, w));
        adj[b].push_back(make_pair(a, w));
    }   
    priority_queue<pii, vect<pii>, greater<pii>> pq; 
    vect<ll> dist(n+1, 1e18); 
    vect<int> prev(n+1, 1e9);
    dist[1] = 0; 
    pq.push(make_pair(0, 1)); 
    while(!pq.empty()) { 
        int u = pq.top().second; 
        pq.pop(); 
        for(auto v : adj[u]) { 
            if(dist[v.first] > dist[u] + v.second) { 
                dist[v.first] = dist[u] + v.second; 
                prev[v.first] = u; 
                pq.push(make_pair(dist[v.first], v.first)); 
            }
        }
    }

    if(dist[n] >= 1e18) { 
        cout << -1; 
        return; 
    }   

    vect<int> ans; 
    for(int i = n; i != 1; i = prev[i]) ans.push_back(i); ans.push_back(1);
    for(int i = ans.size() - 1; i >= 0; i--) cout << ans[i] << " ";
}
int main(void) {    
    ios_base::sync_with_stdio(NULL);
    cin.tie(0); cout.tie(0);

    int tt = 1; 
    // cin >> tt; 
    for(tt; tt > 0; tt--) 
        gabagoo(); 
}