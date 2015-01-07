#include<iostream>
using namespace std;
int main()
{
	long long int test;
	cin>>test;
	while(test--)
	{
		long long int n;
		cin>>n;
		long long int sum=0;
		long long int num=n;
		for(long long int i=0;i<n;i++)
		{
			long long int a;
			cin>>a;
			if(a==0)
				num--;
			sum=sum+a;
		}
		if(sum<=100+num-1 && sum>=100)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
