#include <bits/stdc++.h>
#define        ll     long long int
#define        ls    long long unsigned
using namespace std;
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
        /*for(ll i=0;i<prime.size();i++){
            cout<<prime[i]<<" ";
        }
        cout<<endl;*/
        cout<<"Res="<<res<<endl;
}
int main()
{
    ll n;
    while(1){
        cin>>n;
        sieve(n);
    }
}
