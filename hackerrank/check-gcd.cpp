#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	while(b!=0)
	{
		int t=b;
		b=a%b;
		a=t;
	}
	return a;
}
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		int flag=0;
		int min=1;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]==k)
				flag=1;
		}
		for(int i=n;i>0;i--)
		{
			if(flag==1)
				break;
			for(int j=0;j<i;j++)
			{
				arr[j]=gcd(arr[j],arr[j+1]);
				if(arr[j]==k)
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}

