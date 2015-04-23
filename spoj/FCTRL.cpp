#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int num;
		cin>>num;
		int count=0,i=1;
		int con=num/5;
		while(con>=1)
		{	
			count+=con;
			i++;
			int po=pow(5,i);
			con=num/po;
		}
		cout<<count<<endl;
	}
	return 0;
}
