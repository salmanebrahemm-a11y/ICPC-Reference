 ll fast_pow(ll a, ll b) 
  {
    if (b==0) return 1;
    if (b==1) return a;
    ll ret=1;
    if (b%2!=0) 
    {
       ret=a%mod;
    }
    ll x=fast_pow(a,b/2);
    x=(x*x)%mod;
    ret=(ret*x)%mod;
    return ret%mod;
 }