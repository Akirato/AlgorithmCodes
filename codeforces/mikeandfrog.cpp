#include<iostream>
using namespace std;
int main()
{
	int m;
	cin>>m;
	int h1,a1;
	cin>>h1>>a1;
        int x1,y1;
	cin>>x1>>y1;
	int h2,a2;
	cin>>h2>>a2;
	int x2,y2;
	cin>>x2>>y2;
	int i;
	for(i=1;i<1000001;i++)
	{
		if(h1!=a1)
			h1=(x1*h1+y1)%m;
		if(h2!=a2)
			h2=(x2*h2+y2)%m;
		if(h1==a1 && h2==a2)
		{
			break;
		}
//		cout<<h1<<" "<<h2<<endl;
	}
	if(i!=1000001)
		cout<<i<<endl;
	else
		cout<<"-1"<<endl;
	return 0;
}	
