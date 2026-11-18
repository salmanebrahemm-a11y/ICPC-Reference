#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> dis, par;

void bfs(int u) {
    queue<int> q;
    q.push(u);
    dis[u] = 1;
    while(q.size()){
        int u = q.front();
        q.pop();
        for(int v : adj[u]){
            if(dis[v] == -1){
                par[v] = u;
                dis[v] = dis[u] + 1;
                q.push(v);
            }
        }
    }
}