#include<stdio.h>
#include<math.h>
int arr[1000010]={0};
int main()
{
	int test;
	scanf("%d",&test);
	int i;
	int ans = 0;
	while(test--)
	{
		int n;
		scanf("%d",&n);
		int con = n;
		int l=2;
		while(n>1)
		{
			if(l==2)
			{
				while(n%l==0)
				{
					ans=ans+l;
					n=n/l;
				}	
			}
			if(n==1)
				break;
			else if(((arr[(l-3)/2]==0 || arr[(l-3)/2]==2) && ((l-3)%2==0)) && (n%l==0))
			{
				int j;
				if(arr[(l-3)/2]!=2)
				{
					printf("1\n");
					for(j=((3*l)-3)/2;j<(con-3)/2;j+=(((3*l)-3)/2))
					{
						arr[j]=1;
					}
				}
				arr[(l-3)/2]=2;
				while(n%l==0)
				{
					ans=ans+l;
					n=n/l;
				}
				if(n==1)
					break;
			}
			if(l==2)
				l++;
			else
			{
				l+=2;
				while(arr[(l-3)/2]==1)
					l+=2;
			}
		}

	}
	printf("%d\n",ans);
	return 0;
}
