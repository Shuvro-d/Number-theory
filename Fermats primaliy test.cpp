#include<bits/stdc++.h>
#define        ll        long long int
#define         eps       1e-9
#define         M_E      2.718281828
#define         M_PI     3.1416
#define        MAX       500
#define        frin          for(ll i=0;i<n;i++)
#define        frjn          for(ll j=0;j<n;j++)
const int   mod=1e9+7;
using namespace std;
ll binpow(ll a, ll b,ll n) {
    ll res = 1;
    a=a%n;
    while (b > 0) {
        if (b & 1)
            res = (res * a) %n;
        a = (a * a)%n;
        b >>= 1;
    }
    return res;
}

bool probablyPrimeFermat(ll n)
{
     ll iter=5;                                      // big iteration increases correctness
    if (n <= 1 || n == 4)  return false;
   if (n <= 3) return true;

    for (ll i = 0; i < iter; i++) {
        ll a = 2 + rand() % (n - 3);
        if (__gcd(n, a) != 1)
          return false;
        if (binpow(a, n - 1, n) != 1)
            return false;
    }
    return true;
}


int main()
{
    ll n;
    while(1)
    {
        cin>>n;
        bool flag=probablyPrimeFermat(n);
        if(flag)cout<<"Prime"<<endl;
        else cout<<"Not Prime"<<endl;
    }
    return 0;
}

