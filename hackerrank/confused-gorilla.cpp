#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		int a=0;
		while(a<=n/2)
		{
			int k=a,l=n-a;
			cout<<k<<" "<<l<<endl;
			if(k!=l)
				cout<<n-a<<" "<<a<<endl;
			a++;
		}
	}
	return 0;
}
