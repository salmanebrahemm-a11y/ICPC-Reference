#include<bits/stdc++.h>
using namespace std;

vector<int> linear_sieve(int n){
    vector<int> is_prime(n, 1), primes;
    is_prime[0] = is_prime[2] = 0;
    for(int i = 2;i < n;i++){
        if(is_prime[i]){
            primes.push_back(i);
        }
        for(int j = 0;j < primes.size() && i * primes[j] < n;j++){
            is_prime[i * primes[j]] = 0;
            if(i % primes[j] == 0) break;
        }
    }
    return is_prime;
}