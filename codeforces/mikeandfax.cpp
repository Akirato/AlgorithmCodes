#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int num;
        cin>>a;
	cin>>num;
        int start=0,flag=0;
        int last=num-1;
	int len=a.length();
        if((len%num)!=0) 
		flag=1;
        while(1) 
        {
		if(flag==1 || last>(len-1) || start>(len-1))
			break;
                int j=0;
                
		for(int i=start;i<start+(num+1)/2;i++)
		{
//                cout<<a.at(i)<<" "<<a.at(last-j)<<endl;
			if(a.at(i)!=a.at(last-j))
			{
				flag=1;	
				break;
			}
			j++;
		}
                start=last+1;
                last=last+num;
    //            cout<<start<<" "<<last<<endl;                
        }
	if(flag==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
