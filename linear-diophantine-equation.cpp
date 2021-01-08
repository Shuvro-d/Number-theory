#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;

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

bool find_any_solution(int a, int b, int c, int &x0, int &y0, int &g) {
    g = gcd(abs(a), abs(b), x0, y0);
    if (c % g) {
        return false;
    }
    x0 *= c / g;
    y0 *= c / g;
    if (a < 0) x0 = -x0;
    if (b < 0) y0 = -y0;
    return true;
}
int main()
{
  int a,b,c;
   cin>>a>>b>>c;
   int x0,y0,z0;
   int g;
   bool res=find_any_solution(a,b,c,x0,y0,g);
   if(res){
      cout<<"Yes"<<endl;
      cout<<x0/c<<" "<<y0/c<<endl;
   }
   else
    cout<<"No"<<endl;
    return 0;
}

///this is for only positive values of x and y
/*int main()
{
    int a,b,c;
	cin >> a >> b >> c;
	int x = gcd(a,b);
	if(c%x == 0){
		int k = 0;
		while(a*k<=c){
			if((c-a*k)%b==0){
				cout<<"Yes"<<endl;
				return 0;
			}
			k++;
		}
	}
     cout<<"No"<<endl;
    return 0;
}*/




