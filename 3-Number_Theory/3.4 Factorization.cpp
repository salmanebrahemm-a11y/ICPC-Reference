#include<bits/stdc++.h>
using namespace std;

vector<int> prime_factorization(int n){
    vector<int> factors;
    for(int i = 2;i * i <= n;i++){
        while(n % i == 0){
            n = n / i;
            factors.push_back(i);
        }
    }
    if(n > 1) factors.push_back(n);
    return factors;   
}   