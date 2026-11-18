#include<bits/stdc++.h>
using namespace std;

int fast_pow(int a, int b, int mod) {
   if (b==0) return 1;
   if (b==1) return a;
   int ret = 1;
   if (b%2!=0) 
   {
      ret=a % mod;
   }
   int x = fast_pow(a, b / 2, mod);
   x=(x*x) % mod;
   ret=(ret*x)%mod;
   return ret%mod;
}