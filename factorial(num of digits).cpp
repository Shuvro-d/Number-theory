#include <bits/stdc++.h>
#define        ll     long long int
#define        ls    long long unsigned
using namespace std;
int factorial_digit(int n)
{
    double x = 0;
    for ( int i = 1; i <= n; i++ ) {
        x += log10 ( i );
    }
    int res = x + 1 + 0.000000001;
    return res;
}
int factorial_digit_diff_base(int n,int m)
{
    double x = 0;
    for ( int i = 1; i <= n; i++ ) {
        x += log10 ( i )/log10(m);
    }
    int res = x + 1 + 0.000000001;
    return res;
}
int main()
{
    int n;
    while(1){
        cin>>n;
        cout<<factorial_digit(n)<<endl;
        cout<<factorial_digit_diff_base(n,2)<<endl;   ///2 fr bnarydigit
    }
    return 0;
}
