#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,l,r,x;
	cin>>n>>l>>r>>x;
	int arr[n];
        for(int i=0;i<n;i++)
		cin>>arr[i];
	if(n==1)
	{
		cout<<"0"<<endl;
		return 0;
	}
	sort(arr,arr+n);
        int start=0,last=1,count=0,total=arr[0]+arr[1];
	if(total>=l && total<=r && ((arr[last]-arr[start])>=x))
                        count++;
        int Tototal=arr[start];
        while(last<n)
	{
		Tototal = Tototal+arr[last];
		total=Tototal;
		start=0;
		while(start<last)
		{
			cout<<start<<" "<<last<<" "<<total<<" "<<Tototal<<endl;
			if((arr[last]-arr[start])>=x && total>=l && total<=r)
                        	count++;
			total = total-arr[start];	
                	start++;
		}	
		last++;
	}
	cout<<count<<endl;
	return 0;
}
