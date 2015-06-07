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
	int turn = 1;
	if(totalPopulation%2==0)
	{
		while(n!=k)
		{
			if(turn==1)
			{
				if(numOdd!=0)
					numOdd--;
				else
					numEven--;
				turn=0;
			}
			else
			{
				if(numEven!=0)
					numEven--;
				else
					numOdd--;
				turn=1;
			}
			n--;
		}
	}
	else
	{
		while(n!=k)
		{
			if(turn==1)
			{
				if(numEven!=0)
					numEven--;
				else
					numOdd--;
				turn=0;
			}
			else
			{
				if(numOdd!=0)
					numOdd--;
				else
					numEven--;
				turn=1;
			}
			n--;
		}

	}
	if((numOdd+numEven*2)%2==1)
		cout<<"Stannis"<<endl;
	else
		cout<<"Daenerys"<<endl;
	return 0;
}
