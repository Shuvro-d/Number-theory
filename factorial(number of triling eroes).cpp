#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
vector<int>prime;
int status[2500001];
int i,j;
int ara[1000];
void sieve(int N)
{
   for( i = 2; i <= N>>1; i++ )
            status[i] = 0;
        int  sqrtN = int( sqrt((double) N ));
        for( i = 3; i <= sqrtN; i+=2 )
        {
            if( status[i>>1] == 0 )
            {
                for( j = i * i; j <= N; j += i+i )
                    status[j>>1] = 1;
            }
        }
        prime.push_back(2);
        ll res=0;
        for( i = 3; i <= N; i+=2 )
        {
            if( status[i>>1] == 0 )
            {
                prime.push_back(i);
            }
        }
}

int  factFactorize ( int n ) {
    sieve(n);
    for ( int i = 0; i < prime.size() && prime[i] <= 5; i++ ) {   /// limit is reduced to 5 from 1 cause we only need 2 and 5..
        int x = n;
        int freq = 0;
        int a=prime[i];
        while ( x / a ) {
            freq += x / a;
            x = x / prime[i];
        }
        ara[a]=freq;
    }
}


int main()
{
     int n;
     while(n){
        cin>>n;
        factFactorize(n);
       int x=ara[2];
       int y=ara[5];
       int num=min(x,y);
       cout<<num<<endl;
     }
    return 0;
}


