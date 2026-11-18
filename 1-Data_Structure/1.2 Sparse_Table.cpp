#include<bits/stdc++.h>
using namespace std;

void SP_table(vector<int> v, int sz) {  
    vector<vector<int>> table(sz, vector<int>(log2(sz) + 1));
    for(int i = 0;i < sz;i++) {
        cin >> v[i];
        table[i][0] = v[i];
    }
    
    for(int j = 1;j <= log2(sz);j++){
        for(int i = 0;i < sz - (1<<j) + 1;i++){
            table[i][j] = min(table[i][j - 1], table[i + (1<<(j - 1))][j - 1]);
        }
    }
}
