#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		long long int b,w,x,y,z;
		cin>>b>>w;
		cin>>x>>y>>z;
		long long int ans=0;
		if(x<y+z)
			ans=ans+b*x;
		else
			ans=ans+b*y+b*z;
		if(y<x+z)
			ans=ans+w*y;
		else
			ans=ans+w*x+w*z;
		cout<<ans<<endl;
	}
	return 0;
}
