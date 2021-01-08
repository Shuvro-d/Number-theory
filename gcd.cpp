#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
int gcd1(int a,int b){
if(b==0)return a;
return gcd1(b,a%b);
}
/*int gcd2(int a,int b){
while(b){
    a=a%b;
    swap(a,b);
}
return a;
}*/
int main()
{
  int a,b;
  while(1){
  cin>>a>>b;
  int ans1=gcd1(a,b);
  cout<<ans1<<endl;
 /* int ans2=gcd2(a,b);
  cout<<ans2<<endl;*/
  }
    return 0;
}

