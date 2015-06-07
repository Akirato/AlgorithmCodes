#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n,sx,sy,ex,ey,bx,by;
		cin>>n>>sx>>sy>>ex>>ey>>bx>>by;
//		cout<<n<<" "<<sx<<" "<<sy<<" "<<ex<<" "<<ey<<" "<<bx<<" "<<by<<endl;
		int xco = abs(ex-sx);
		int yco = abs(ey-sy);
//		cout<<xco<<" "<<yco<<endl;
		if(xco==0 && yco==0)
			cout<<"0"<<endl;
		else if((ex==bx && bx==sx && ((by<sy && by>ey) || (by>sy && by<ey))) || (ey==by && by==sy && ((bx<sx && bx>ex) || (bx>sx && bx<ex))))
			cout<<xco+yco+2<<endl;
		else
			cout<<xco+yco<<endl;
	
	}
	return 0;
}
