#include<bits/stdc++.h>
using namespace std;

int phi(int n) { // sqrt(n)
	int ans = n;
	for (int p = 2; p * p <= n; p++) {
		if (n % p == 0) {
			while (n % p == 0) n /= p;
			ans -= ans / p;
		}
	}
	if (n > 1) ans -= ans / n;
	return ans;
}

const int N = 1e6 + 1;
int phii[N];

void build() { // precompute --> O(nlog(log(n)))
	for (int i = 1; i < N; i++) phii[i] = i;
	for (int i = 2; i < N; i++) {
		if (phii[i] == i) {
			for (int j = i; j < N; j += i) phii[j] -= phii[j] / i;
		}
	}
}