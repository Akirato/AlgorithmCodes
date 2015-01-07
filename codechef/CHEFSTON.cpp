#include<iostream>
using namespace std;
int main()
{
	long long int test;
	cin>>test;
	while(test--)
	{
		long long int n,k;
		cin>>n>>k;
		long long int arr[n],arr2[n];
		for(long long int i=0;i<n;i++)
		{
			long long int a;
			cin>>a;
			arr[i]=k/a;
		}
		for(long long int i=0;i<n;i++)
		{
			cin>>arr2[i];
		}
		long long int max=arr[0]*arr2[0];
		for(long long int i=0;i<n;i++)
		{
			long long int c=arr[i]*arr2[i];
			if(c>max)
				max=c;
		}
		cout<<max<<endl;
	}
	return 0;
}
