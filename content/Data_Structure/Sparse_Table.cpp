void SP_table(vector<ll> v, ll sz) {  
    vector<vector<ll>> (sz, vector<ll> (log2(sz) + 1));
    loop(i, n){
        cin >> v[i];
        table[i][0] = v[i];
    }
    
    for(ll j = 1;j <= log2(n);j++){
        for(ll i = 0;i < n - (1<<j) + 1;i++){
            table[i][j] = min(table[i][j - 1], table[i + (1<<(j - 1))][j - 1]);
        }
    }
}
