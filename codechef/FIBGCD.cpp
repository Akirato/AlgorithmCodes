#include<iostream>
using namespace std;
int fibo[1000000]={0};
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
	fibo[0]=1;
        fibo[1]=1;
	if(n<3)
            return fibo[0];
        else if(fibo[n-1]!=0)
            return fibo[n-1];
        else if(fibo[n-2]!=0 && fibo[n-3]!=0)
            fibo[n-1]=(fibo[n-2]+fibo[n-3])%10000000007;
        else if(fibo[n-2]!=0)
            fibo[n-1]=(fibo[n-2]+fib(n-3))%10000000007;
        else
            fibo[n-1]=(fib(n-2)+fib(n-3))%10000000007;
        return fibo[n-1];
}
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int a,b;
		cin>>a>>b;
                if(a==0 && b==0)
                    cout<<"0"<<endl;
		cout<<fib(gcd(a,b))<<endl;
	}
	return 0;
}
