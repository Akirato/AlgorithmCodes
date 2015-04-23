#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int arr[num],a=0;
	int i=0;
	for(i=0;i<num/2;i++)
	{
		arr[a]=i+1;
		a++;
	}
	for(i=0;i<num/2;i++)
	{
		arr[a]=num-i;
		a++;
	}
	for(int i=0;i<a/2;i++)
	{
		if(i%2!=0)
		{
			int temp = arr[i];
			arr[i]=arr[num-i-1];
			arr[num-i-1]=temp;
		}
	}
	if(num%2==0)
		cout<<num<<endl;
	else
		cout<<num-1<<endl;
	for(int i=0;i<a-1;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<arr[a-1]<<endl;
	return 0;
}
