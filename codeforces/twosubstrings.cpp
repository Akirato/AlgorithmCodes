#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	string a;
	cin >> a;
	
	vector<int> nuri, bhan;

	for(int i = 0; i < a.size(); i++) {
		if(a[i] == 'A' && a[i + 1] == 'B')
			nuri.push_back(i);
		if(a[i] == 'B' && a[i + 1] == 'A')
			bhan.push_back(i);
	}
	for(int i = 0; i < nuri.size(); i++) {
		for(int j = 0; j < bhan.size(); j++) {
			if(abs(nuri[i] - bhan[j]) > 1)
				cout << "YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}
