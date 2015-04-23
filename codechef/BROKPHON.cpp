#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int num;
		cin>>num;
		int arr[num];
		for(int i=0;i<num;i++)
		{
			cin>>arr[i];
		}
		int count = 0;
		for(int i=1;i<num-1;i++)
		{
//                        cout<<"B"<<arr[i-1]<<" "<<arr[i]<<" "<<arr[i+1]<<endl;
			if(arr[i]!=arr[i-1] || arr[i]!=arr[i+1])
			{
				count++;
			}
//			cout<<"A:"<<count<<endl;
		}
		if(arr[0]!=arr[1])
			count++;
		if(arr[num-1]!=arr[num-2])
			count++;
		cout<<count<<endl;
	}	
	return 0;
}
