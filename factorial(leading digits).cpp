
#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
const double eps = 1e-9;

int leadingDigitFact ( int n, int k ) {
    double fact = 0;
    for ( int i = 1; i <= n; i++ ) {
        fact += log10 ( i );
    }
    double q = fact - floor ( fact+eps );
    double B = pow ( 10, q );
      for ( int i = 0; i < k - 1; i++ ) {
        B *= 10;
    }
    return floor(B+eps);
}


int main()
{
     int n,k;
     while(n){
        cin>>n>>k;
       cout<<leadingDigitFact(n,k)<<endl;
     }
    return 0;
}

