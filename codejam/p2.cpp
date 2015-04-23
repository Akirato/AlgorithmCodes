#include<iostream>
using namespace std;
int main()
{
	int test,p=0;
	cin>>test;
	while(test--)
	{
		p++;
		int num,time=0;
		cin>>num;
		int arr[100000];
		int min = 1000000;
		for(int i=0;i<num;i++)
		{
			cin>>arr[i];
			if(min < arr[i])
				min = arr[i];
		}
		while (1)
		{
			int ind = 0;
			int maxx = arr[0];
			int flag = 1;
			for(int i=0;i<num;i++)
			{
				if(arr[i] > min)
					flag = 0;
				if(maxx < arr[i])
				{
					maxx =arr[i];
					ind=i;
				}
			}
			arr[ind] = (arr[ind]+1)/2;
			if(flag == 1)
			{
				time+=min;
				break;
			}
			time++;
		}
		cout<<"Case #"<<p<<": "<<time<<endl;
	}
	return 0;
}
