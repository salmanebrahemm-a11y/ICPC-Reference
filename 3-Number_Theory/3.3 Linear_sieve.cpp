#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 1;
vector<bool> is_prime(N, 1);
vector<int> primes;

void linear_sieve(){ // pre compute
    is_prime[0] = is_prime[1] = 0;
    for(int i = 2;i < N;i++){
        if(is_prime[i]){
            primes.push_back(i);
        }
        for(int j = 0;j < primes.size() && i * primes[j] < N;j++){
            is_prime[i * primes[j]] = 0;
            if(i % primes[j] == 0) break;
        }
    }
    return;
}