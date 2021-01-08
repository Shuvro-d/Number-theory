#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;

vector <int> factors;
vector<int>prime;
int status[2500001];

void sieve(int N)
{
    for(int i = 2; i <= N>>1; i++ )
            status[i] = 0;
        int  sqrtN = int( sqrt((double) N ));
        for(int  i = 3; i <= sqrtN; i+=2 )
        {
            if( status[i>>1] == 0 )
            {
                for( int j = i * i; j <= sqrtN; j += i+i )
                    status[j>>1] = 1;
            }
        }
        prime.push_back(2);
        for(int  i = 3; i <= sqrtN; i+=2 )
        {
            if( status[i>>1] == 0 )
            {
                prime.push_back(i);
            }
        }
        /*for(int i=0;i<prime.size();i++){
            cout<<prime[i]<<" ";
        }
        cout<<endl;*/
}

void factorize( int n )
{
    sieve(n);
    int z=n;
    int sqrtn = sqrt ( n );
    for ( int i = 0; i < prime.size() && prime[i] <= sqrtn; i++ )
    {
        if ( n % prime[i] == 0 )
        {
            while ( n % prime[i] == 0 )
            {
                n /= prime[i];
                factors.push_back(prime[i]);
            }
            sqrtn = sqrt ( n );
        }
    }
    if ( n != 1 )
    {
        factors.push_back(n);
    }
    for(int i=0;i<factors.size();i++){
            if(z%factors[i]==0){
                 z/=factors[i];
                cout<<factors[i]<<endl;
            }
    }
    cout<<endl;
}

int main()
{
    int N;
    while(1){
         cin>>N;
       factorize(N);
    }
    return 0;
}
