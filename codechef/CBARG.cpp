#include<iostream>
using namespace std;
int main()
{
	long long int test;
	cin>>test;
	while(test--)
	{
		long long int num;
		cin>>num;
		long long int testfile;
		long long int memory=0;
		long long int allocated=0;
		for(long long int i=0;i<num;i++)
                {
			cin>>testfile;
			if(testfile>memory)
			{
				allocated = allocated + (testfile - memory);
			}
			memory = testfile;
		}
		cout<<allocated<<endl;
	}
	return 0;
}
