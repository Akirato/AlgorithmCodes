#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		long long int num,sum=0;
		cin>>num;
		long long int arr[num];
		for(int i=0;i<num;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		sum=sum/(num-1);
		for(int i=0;i<(num);i++)
		{
			cout<<sum-arr[i]<<" ";
		}
	}
	return 0;
}
