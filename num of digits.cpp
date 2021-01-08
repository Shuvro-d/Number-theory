#include <bits/stdc++.h>
#define        ll     long long int
#define        ls    long long unsigned
using namespace std;
int digit(int n)
{
    int ans=log10(n)+0.000000001+1;
    return ans;
}
int main()
{
    int n;
    while(1){
        cin>>n;
        cout<<digit(n)<<endl;
    }
    return 0;
}

