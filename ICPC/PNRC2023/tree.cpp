#include <bits/stdc++.h>
#include <iostream> 

using namespace std; 

vector<vector<int>> adj;

int ans = 0; 

void dfs(int u) {
   
}

int main(void) {
   int n; 
   string s; 
   cin >> n >> s; 
   adj = vector<vector<int>>(n+1);
   for(int i = 0; i < n-1; i++) { 
      int u, v;
      cin >> u >> v; 
      adj[u].push_back(v);
   }
   cout << ans;  
}