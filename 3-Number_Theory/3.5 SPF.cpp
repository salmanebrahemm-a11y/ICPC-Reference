#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 1;
int spf[N];
vector<int> primes;

void build() { // pre compute --> O(n)
    for (int i = 2; i < N; i++) {
        if (spf[i] == 0) {
            spf[i] = i;
            primes.push_back(i);
        }
        for (int p : primes) {
            if (p > spf[i] || (long long)i * p >= N) break;
            spf[i * p] = p;
        }
    }
}

vector<int> factorize(int n) { // O(log(n))
    vector<int> f;
    while (n > 1) {
        f.push_back(spf[n]); 
        n /= spf[n]; 
    }
    return f;
}