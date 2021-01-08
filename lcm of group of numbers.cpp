#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;

int main()
{
    int t, n ;
    cin>>t;
    while( t--)
    {
        cin>>n;
        ll lcm = 1;
        for( ll i = 2 ; i <= n ; i++ )
        {
            lcm = (i*lcm)/(__gcd(lcm,i));
        }
        cout<< lcm <<endl;
    }
    return 0;
}
