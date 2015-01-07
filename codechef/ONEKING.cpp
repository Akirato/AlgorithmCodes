#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		long long int num;
		cin>>num;
		long long int ans=0,count=0,flag=0;
		long long int start[num];
		long long int finish[num];
		for(long long int i=0;i<num;i++)
		{
			cin>>start[i];
			cin>>finish[i];
			if(start[i]!=0 || finish[i]!=0)
			{
				flag=1;
			}
		}
		while(count<num)
		{
			long long int min=20000,index;
			for(long long int i=0;i<num;i++)
			{
				if(finish[i]<=min && finish[i]!=-1)
				{
					min=finish[i];
					index=i;
				}
			}
			long long int intervalStart=start[index],intervalFinish=finish[index];
			for(long long int i=0;i<num;i++)
			{
				if (!((start[i]<intervalStart && finish[i]<intervalStart) || (start[i]>intervalFinish && finish[i]>intervalFinish)))
				{
					if(intervalStart<start[i]) intervalStart=start[i];
					start[i]=-1;
					finish[i]=-1;
					count++;
				}
			}
			ans++;
		}
		if(flag==1)
			cout<<ans<<endl;
		else
			cout<<"0"<<endl;
	}
	return 0;
}
