#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	int query;
	cin>>query;
	while(query--)
	{
		int k;
		cin>>k;
		long long int ans=0;
		int start=0;
		for(int i=0;i<num;i++)
		{
			while(arr[i]%k==0 && i<num)
			{
				start++;
				i++;
			}
			ans = ans + (start*(start+1))/2;
			start = 0;
		}
		cout<<ans<<endl;
	}
	return 0;
}
