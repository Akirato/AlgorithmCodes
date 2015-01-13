#include<stdio.h>
int main()
{
	long long int n,q;
	scanf("%lld %lld",&n,&q);
	long long int i,arr[n];
	scanf("%lld",&arr[0]);
	for(i=1;i<n;i++)
	{
		long long int a;
		scanf("%lld",&a);
		arr[i]=arr[i-1]+a;
	}
	for(i=0;i<q;i++)
	{
		long long int a,b;
		char s[4];
		scanf("%s %lld %lld",s,&a,&b);
		if(a>1)
			printf("%lld\n",arr[b-1]-arr[a-2]);
		else if(b>1)
			printf("%lld\n",arr[b-1]);
		
	}
	return 0;
}
