#include<iostream>
using namespace std;
int main()
{
	int num,query;
	cin>>num;
	cin>>query;
	int arr[num];
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	while(query--)
	{
		int l,r,ans=0;
		cin>>l>>r;
		l=l-1;
		r=r-1;
		for(int i=l+1;i<r;i++)
		{
			int le=0,ri=0;
			for(int j=i-1;j>l;j--)
			{
				if(arr[j]<arr[l] && arr[j]<arr[i])
					le++;
			}
			for(int j=i+1;j<r;j++)
			{
				if(arr[j]<arr[r] && arr[j]<arr[i])
					ri++;
			}
			ans=ans+(le*ri);
		}
		cout<<ans<<endl;
	}
	return 0;
}
