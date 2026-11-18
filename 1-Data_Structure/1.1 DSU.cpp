#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int> parent, size; 

    void init(int n) {
        parent.resize(n + 1);
        size.resize(n + 1);

        for (int i = 1; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int find_root(int u) {
        if (parent[u] == u) 
            return u;
        return parent[u] = find_root(parent[u]); 
    }
    
    bool merge(int u, int v) {
        int root_u = find_root(u);
        int root_v = find_root(v);

        if (root_u == root_v) {
            return 0; 
        }

        if (size[root_u] > size[root_v])
            swap(root_u, root_v);

        parent[root_u] = root_v; 
        size[root_v] += size[root_u];
        
        return 1; 
    }
};