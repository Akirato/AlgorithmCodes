#include<iostream>
using namespace std;
int fibo[1000000]={0};
fibo[0]=1;
fibo[1]=1;
int gcd(int a,int b)
{
	while(b!=0)
	{
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int fib(int n)
{
	if(n<3)
           return fibo[0];
        else if(fibo[n]!=0)
           return fibo[n];
        else if(fibo[n-1]!=0 and 
}
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int a,b;
		cin>>a>>b;
		cout<<fib(gcd(a,b))<<endl;
	}
	return 0;
}
