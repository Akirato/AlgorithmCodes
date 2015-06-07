#include<iostream>
using namespace std;
int main()
{
	long long int num;
	cin>>num;
	long long int arr[num];
	for(long long int i=0;i<num;i++)
		cin>>arr[i];
	long long int count=0,count2=0;
		long long int flag=0;
	for(long long int i=0;i<num-1;i++)
	{
		count2=0;
		long long int buff1=arr[i];
		long long int buff2=arr[i+1];
		while(arr[i]>arr[i+1])
		{
			long long int temp=arr[i]-1;
			arr[i]=arr[i+1]+1;
			arr[i+1]=temp;
			count2++;
			if(arr[i+1]==buff1 && arr[i]==buff2)
			{
				flag=1;
				break;
			}
		}
		count++;
	}
	if(flag==1)
		cout<<":("<<endl;
	else
	{
		for(long long int i=0;i<num-1;i++)
			cout<<arr[i]<<" ";
		cout<<arr[num-1]<<endl;
	}
	return 0;
}
