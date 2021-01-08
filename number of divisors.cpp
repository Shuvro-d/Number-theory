#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;

int NOD ( int n ) {
    int res = 0;
    int sqrtn = sqrt ( n );

    for ( int i = 1; i < sqrtn; i++ ) {
        if ( n % i == 0 ) res += 2; // Found a divisor pair {A,B}
    }

    // Need to check if sqrtn divides n
    if ( n % sqrtn == 0 ) {
        if ( sqrtn  == n ) res++; // If n is perfect square
        else res += 2; // Not perfect square
    }

    return res;
}

int main()
{
    int n;
    while(1){
        cin>>n;
        cout<<NOD(n)<<endl;
    }
    return 0;
}
