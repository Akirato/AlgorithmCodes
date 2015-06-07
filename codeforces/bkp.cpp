#include<iostream>
using namespace std;
int main()
{
	long long int n,k;
	cin>>n>>k;
	int arr[n];
	long long int totalPopulation=0, numEven=0, numOdd=0, stanWin=1;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]%2==0)
			numEven++;
		else
			numOdd++;
		totalPopulation+=arr[i];
	}
	if(totalPopulation%2==0)
	{
		if((n-k)%2==0)
		{
			if(((n-k)/2)<=numEven)
			{
				stanWin=0;
			}
			else
				stanWin=1;
		}
		else
		{
			if(((n-k)/2+1)<=numOdd)
				stanWin=1;
			else
				stanWin=0;
		}
	}
	else
	{
		if((n-k)%2==0)
		{
			if(((n-k)/2)<=numOdd)
			{
				stanWin=0;
			}
			else
				stanWin=1;
		}
		else
		{
			if(((n-k)/2+1)<=numEven)
				stanWin=1;
			else
				stanWin=0;
		}

	}
	if(stanWin==1)
		cout<<"Stannis"<<endl;
	else
		cout<<"Daenerys"<<endl;
	return 0;
}
