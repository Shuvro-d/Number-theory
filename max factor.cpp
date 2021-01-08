#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;

int main() {
   unsigned long long int n;
    cin>>n;
   unsigned long long int div=2, ans = 0, maxFact;
   while(n!=0) {
      if(n % div !=0)
         div = div + 1;
      else {
         maxFact = n;
         n = n / div;
         if(n == 1) {
            printf("%d is the largest prime factor !",maxFact);
            ans = 1;
            break;
         }
      }
   }
   return 0;
}
