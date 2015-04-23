#include<iostream>
#include<cmath>
using namespace std;
int dislog(int arr[],int a, int b, int g)
{
	int m=ceilf(sqrt(g));
	arr[0]=1;
	for(int j=1;j<m;j++)
	{
		arr[j]=arr[j-1]*a;
	}
	float gamma = pow(a,-1*m);
	int c=b;
	for(int i=0;i<m;i++)    
	{
		for(int k=0;k<m;k++)
		{
			if(arr[k]==c)
			{
				return i*m+k;
			}
		}
		return -1;
	}
}
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int arr[1000000];
		int a,b,g;
		cin>>a>>b>>g;
		cout<<dislog(arr,a,b,g)<<endl;
	}
	return 0;
}
