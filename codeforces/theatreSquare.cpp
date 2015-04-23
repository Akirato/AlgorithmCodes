#include<iostream>
using namespace std;
int main()
{
	long long int n,m,a;
	cin>>n>>m>>a;
	long long int ans1=(n/a);
	long long int ans2=(m/a);
	if (n%a!=0) ans1++;
	if (m%a!=0) ans2++;
	cout<<ans1*ans2<<endl;
	return 0;
}
