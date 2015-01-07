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
		int count=num+1;
		if (num!=0)
			cout<<count<<endl;	
		else
			cout<<"0"<<endl;
	}
	return 0;
}
