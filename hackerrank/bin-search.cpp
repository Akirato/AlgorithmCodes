#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int binsearch(int arr[],int start,int finish,int find)
{
    if(finish>=start)
    { 
        int middle=start+(finish-start)/2;
        if(arr[middle]==find)
            return middle;
        else if(arr[middle]>find)
            return binsearch(arr,0,middle-1,find);
        else
            return binsearch(arr,middle+1,finish,find);
    }
    return -1;
}
int main() {
    int ans,num;
    cin>>ans>>num;
    int arr[num];
    for(int i=0;i<num;i++)
        cin>>arr[i];
    cout<<binsearch(arr,0,num-1,ans)<<endl;
    return 0;
}

