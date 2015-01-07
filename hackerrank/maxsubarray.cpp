#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		int ans2=0,flag=0;
		cin>>n;
		int arr[n];
		cin>>arr[0];
		if(arr[0]>0)
		{
			flag=1;
			ans2=ans2+arr[0];
		}
		int maxmum=arr[0];
		for(int i=1;i<n;i++)
		{
			cin>>arr[i];
			if (arr[i]>maxmum)
				maxmum=arr[i];
			if(arr[i]>0)
			{
				flag=1;
				ans2=ans2+arr[i];
			}
		}
		int maxi=0;
		int maxend=0;
		for(int i=0;i<n;i++)
		{
			maxend=maxend+arr[i];
			if(maxend < 0)
				maxend=0;
			if(maxi < maxend)
				maxi=maxend;
		}
		if(flag==1)
			cout<<maxi<<" "<<ans2<<endl;
		else
			cout<<maxmum<<" "<<ans2<<endl;
	}
	return 0;
}
