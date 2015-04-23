#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		int un=0,in=0;
		int a;
		int arr[n][4];
		for(int i=1;i<n+1;i++)
		{
			arr[i-1][0]=i;
			arr[i-1][1]=0;
			arr[i-1][2]=0;
		}
		for(int i=0;i<m;i++)
		{
			cin>>a;
			arr[a-1][0]=-1;
			arr[a-1][1]=-2;
		}	
		for(int i=0;i<k;i++)
		{
			cin>>a;
			arr[a-1][0]=-1;
			arr[a-1][2]=-2;
			if(arr[a-1][1]==-2)
				in++;
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i][0]!=-1)
				un++;
		}
		cout<<in<<" "<<un<<endl;
	}
	return 0;
}
