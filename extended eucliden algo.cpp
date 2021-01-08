#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
int ext_gcd ( int A, int B, int *X, int *Y ){
    int x2, y2, x1, y1, x, y, r2, r1, q, r;
    x2 = 1; y2 = 0;
    x1 = 0; y1 = 1;
    r2 = A; r1 = B;
    while ( r1 != 0) {
        q = r2 / r1;
        r = r2 % r1;
        x = x2 - (q * x1);
        y = y2 - (q * y1);
        r2 = r1;r1 = r; x2 = x1; y2 = y1; x1 = x; y1 = y;
    }
    *X = x2; *Y = y2;
    return r2;
}
int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

int main()
{
  int a,b;
  int X,Y;
  while(1){
  cin>>a>>b;
  int ans1=ext_gcd(a,b,&X,&Y);
  cout<<ans1<<" "<<X<<" "<<Y<<endl;
  }
    return 0;
}



