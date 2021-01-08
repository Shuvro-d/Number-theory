#include <bits/stdc++.h>
#define        ll     long long int
#define        ls    long long unsigned
using namespace std;

int phi(int n) {
    int ans = n;////////////easy version
    for (int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            while(n % i == 0)
                n /= i;
            ans -= ans / i;
        }
    }
    if(n > 1)
        ans -= ans / n;
    return ans;
}


int status[2500001];
vector<ll> prime;
void sieve(ll N)
{
     for(ll i = 2; i <= N>>1; i++ )
            status[i] = 0;
        int  sqrtN = int( sqrt((double) N ));
        for(ll i = 3; i <= sqrtN; i+=2 )
        {
            if( status[i>>1] == 0 )
            {
                for(ll  j = i * i; j <= N; j += i+i )
                    status[j>>1] = 1;
            }
        }
        prime.push_back(2);
        ll res=1;
        for(ll i = 3; i <= N; i+=2 )
        {
            if( status[i>>1] == 0 )
            {
                prime.push_back(i);
                res++;
            }
        }
}
int eulerPhi ( ll n ) {
    ll res = n;
    ll sqrtn = sqrt ( n );
    sieve(n);
    for ( ll i = 0; i < prime.size() && prime[i] <= sqrtn; i++ ) {
        if ( n % prime[i] == 0 ) {
            while ( n % prime[i] == 0 ) {
                n /= prime[i];
            }
            sqrtn = sqrt ( n );
            res /= prime[i];
            res *= prime[i] - 1;
        }
    }
    if ( n != 1 ) {
        res /= n;
        res *= n - 1;
    }
    return res;
}
int main()
{
    ll n;
    while(1){
        cin>>n;
        cout<<eulerPhi(n)<<endl;
    }
    return 0;
}

