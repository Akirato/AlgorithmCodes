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
		int num2=0,num5=0,num10=0;
		for(int i=1;i<num+1;i++)
		{
			if (i%10==0)
				num10+=i;
			else if(i%2==0)
				num2+=i;
			else if(i%5==0)
				num5+=i;
		}
//		cout<<num10<<" "<<num2<<" "<<num5<<endl;
		cout<<num10+min(num2,num5)<<endl;
	}
	return 0;
}
