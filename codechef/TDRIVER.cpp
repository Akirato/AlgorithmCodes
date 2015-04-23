#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n,a,b;
		cin>>n;
		cin>>a>>b;
		int arr[n][3];
		int dist=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i][0]>>arr[i][1];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				dist = dist + max(a*(abs(arr[i][0]-arr[j][0])),b*(abs(arr[i][1]-arr[j][1])));
			}
		}
		cout<<dist<<endl;
	}
	return 0;
}
