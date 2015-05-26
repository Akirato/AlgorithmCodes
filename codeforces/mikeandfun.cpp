#include<iostream>
using namespace std;
int main()
{
	int n,m,q;
        cin>>n>>m>>q;
        int arr[n][m];
        for(int i=0;i<n;i++)
	{	
		for(int j=0;j<m;j++)
		{	
			cin>>arr[i][j];
		}
	}
	while(q--)
	{
		int a,b;
		cin>>a>>b;
		if(arr[a-1][b-1]==0)
			arr[a-1][b-1]=1;
		else
			arr[a-1][b-1]=0;
		int overallMax=0;
		for(int j=0;j<n;j++)
		{
			int max=0,score=0;
			for(int i=0;i<m;i++)
			{
//                        	cout<<"a:"<<arr[a-1][i]<<endl;
				if(arr[j][i]==1)
				{
					score++;
				}
				if(arr[j][i]==0)
				{
					if(score>max)
						max=score;
					score=0;
				}
				if(score>max)
					max=score;
			}
                        if(max>overallMax)
                              overallMax=max;
		}
		cout<<overallMax<<endl;
	}
	return 0;
}
