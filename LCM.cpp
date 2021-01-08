#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;

int gcd(int a,int b){
if(b==0)return a;
return gcd(b,a%b);
}

int lcm(int a,int b){
return (a/gcd(a,b))*b;
}
int main()
{
  int a,b;
  while(1){
  cin>>a>>b;
  int ans1=gcd(a,b);
  cout<<ans1<<endl;
  int ans2=lcm(a,b);
  cout<<ans2<<endl;
  }
    return 0;
}
