#include<bits/stdc++.h>
using namespace std;
#define MAX 100000

int multiply(int x, int res[], int res_size);
void power(int a,int n)
{
	int res[MAX];
	res[0] = 1;
	int res_size = 1;
	for (int x=1; x<=n; x++)
		res_size = multiply(a, res, res_size);
    int sum=0;
	for (int i=res_size-1; i>=0; i--){
        sum=sum+res[i];
        cout << res[i];
	}
		cout<<endl;
		cout<<sum<<endl;
}
int multiply(int x, int res[], int res_size)
{
	int carry = 0;
	for (int i=0; i<res_size; i++)
	{
		int prod = res[i] * x + carry;
		res[i] = prod % 10;
		carry = prod/10;
	}
	while (carry)
	{
		res[res_size] = carry%10;
		carry = carry/10;
		res_size++;
	}
	return res_size;
}

int main()
{
    int n,a;
    while(1){
        cin>>a>>n;
        power(a,n);
    }
	return 0;
}
