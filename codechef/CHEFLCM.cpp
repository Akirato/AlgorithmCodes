#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		long long int num;
		long long int sum=0;
		cin>>num;
		for(long long int i=2;i*i<=num;i++)
		{
			if(num%i==0)
				sum = sum + i + num/i;
			if(i*i==num)
				sum = sum - i;
		}
		sum += 1;
		if(num!=1)
		{
			sum+=num;
		}
		cout<<sum<<endl;
	}
	return 0;
}
