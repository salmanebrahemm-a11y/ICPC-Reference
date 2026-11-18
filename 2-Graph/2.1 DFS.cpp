#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> vis;

void dfs(int u, int par){
    vis[u] = 1;
    for(auto ch : adj[u]){
        if(!vis[u]){
            dfs(ch, u);
        }
    }
}