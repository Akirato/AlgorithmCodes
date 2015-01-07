#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	char str[100010];
	int arr[100010];
	scanf("%s",str);
	int i;
	arr[0]=str[0]-'0';
	for(i=0;i<n;i++)
	{
		arr[i]=arr[i-1]+str[i]-'0';
	}
	while(m--)
	{
		int num;
		scanf("%d",&num);
		if(num==1)
		{
			int x;
			char y;
			scanf("%d %c",&x,&y);
			str[x-1]=y;
			for(i=x-1;i<n;i++)
			{
				arr[i]=arr[i]-arr[x-1]+(y-'0');
			}

		}
		if(num==2)
		{
			long long int a,b,j,count=0;
			scanf("%d %d",&a,&b);
			for(i=a-1;i<b;i++)
			{
				for(j=i;j<b;j++)
				{
					if((((arr[j]-arr[i])+(str[i]-'0'))%3)==0)
						count++;
				}
			}
			printf("%d\n",count);
		}
	}	
}
