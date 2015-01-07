#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int num,x,y;
	int out=0,sum1=0;
	cin>>num>>x>>y;
	int arr[num],arr2[num],diff[num];
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
                sum1=sum1+arr[i];
	}
	for(int i=0;i<num;i++)
		cin>>arr2[i];
	for(int i=0;i<num;i++)
	{
        	diff[i]=arr[i]-arr2[i];
	}
        sort(diff,diff+num);
//        for(int i=0;i<num;i++)
//		cout<<diff[i]<<" ";
//	cout<<'\n';
        int a=0,b=0;
        for(int i=0;i<num-x;i++)
	{
		a=a+diff[i];	
	}
        for(int i=0;i<y;i++)
	{
		b=b+diff[i];
	}
        if(a<=b)
		out=sum1-a;
	else
		out=sum1-b;
	cout<<out<<endl;
	return 0;
}
