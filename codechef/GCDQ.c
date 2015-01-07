#include<stdio.h>
int gcd ( int a, int b )
{
	int c;
	while ( a != 0 ) {
        	c = a; 
		a = b%a;  
		b = c;
	}
	return b;
}
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int n,q;
		scanf("%d %d",&n,&q);
		int arr[n],arr2[n],arr3[n];
		int i;
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
			if(i==0)
				arr2[i]=arr[i];
			else
				arr2[i]=gcd(arr[i],arr2[i-1]);
		}
		arr3[n-1]=arr[n-1];
		for(i=1;i<n;i++)
		{
			arr3[n-i-1]=gcd(arr3[n-i],arr[n-i-1]);
		}
/*                for(int i=0;i<n;i++)
		{
			cout<<"arr: "<<arr[i]<<" arr2: "<<arr2[i]<<" arr3: "<<arr3[i]<<endl;
		}*/
		while(q--)
		{
			int l,r;
			scanf("%d %d",&l,&r);
                        if(l>=2 && r<=n-1)
				printf("%d\n",gcd(arr2[l-2],arr3[r]));
			else if(l<2)
                                printf("%d\n",arr3[r]);
			else
				printf("%d\n",arr2[l-2]);
		}
	}
	return 0;
}
