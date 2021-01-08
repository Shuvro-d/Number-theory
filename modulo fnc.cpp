#include <bits/stdc++.h>
#define        ll     long long int
using namespace std;
ll mod=;

int sum(ll a,ll b)
{
    return ((a%mod)+(b%mod))%mod;
}
int sub(ll a,ll b)
{
    return (((a-b)%mod)+mod)%mod;
}
int mul(ll a,ll b)
{
    return ((a%mod)*(b%mod))%mod;
}


int gcdExtended(int a, int b, int *x, int *y)
{
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
    int x1, y1;
    int gcd = gcdExtended(b%a, a, &x1, &y1);
    *x = y1 - (b/a) * x1;
    *y = x1;
    return gcd;
}
int modInverse(int b)
{
    int x, y;
    int g = gcdExtended(b, mod, &x, &y);
    if (g != 1)
        return -1;
    return (x%mod + mod) % mod;
}
void modDivide(ll a, ll b)
{
    a = a % mod;
    int inv = modInverse(b, mod);
    if (inv == -1)
       return -1;
    else
      return  (inv * a) % mod;
}
int power ( int b, int p, int m ) {
    int res = 1 % m, x = b % m;
    while ( p ) {
        if ( p & 1 ) res = ( res * x ) % m;
        x = ( x * x ) % m;
        p >>= 1;
    }
    return res;
}

int main()
{

}
