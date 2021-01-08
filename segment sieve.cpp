#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;

void sieve(int x,vector<int>& prime)
{
    int a[x+1];
    memset(a,0,sizeof(a));
    for(int i=3; i<=x; i=i+2)
    {
        if(a[i]==0)
        {
            for(int j=i*i; j<=x; j+=i+i)
            {
                a[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(int i=3; i<=x; i+=2)
    {
        if(a[i]==0)
            prime.push_back(i);
    }
}

void PrimeRange(int a, int b)
{
    if ( a == 1 )
        a++;
    int sz=b-a+1;
    int sqrtn =  floor(sqrt(b)) + 1;
    int arr[sz];
    memset ( arr, 0, sizeof arr );
    vector<int>prime;
    sieve(sqrtn,prime);
    for ( int i = 0; i < prime.size() && prime[i] <= sqrtn; i++ )
    {
        int p = prime[i];
        int j = p * p;
        if ( j < a )
            j = ( ( a + p - 1 ) / p ) * p;
        for ( ; j <= b; j += p )
        {
            arr[j-a] = 1;
        }
    }
    int res = 0;
    for ( int i = a; i <= b; i++ )
    {
        if ( arr[i-a] == 0 ){
            cout<<i<<" ";
            res++;
        }
    }
    cout<<endl;
    cout<<"Number of prime = "<<res<<endl;
}

int main()
{
    int a,b;
    while(1){
        cin>>a>>b;
        PrimeRange(a,b);
    }
    return 0;
}
