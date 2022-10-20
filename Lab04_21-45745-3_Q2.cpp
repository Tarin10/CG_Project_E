#include<iostream>
using namespace std;
int main()
{
    int i,s,low,mid,high,arr[10];
    int lo=low,hi=high;
    cout<<"Enter 10 Elements => ";
    for(i=0; i<10; i++)
        {
        cin>>arr[i];
        }
    cout<<endl;
    cout<<"Enter Element to Search => ";
    cin>>s;
    lo = 0,hi = 10;
    mid =(lo+hi)/2;
    while(lo<=hi)
    {
        if(arr[mid]<s)
            lo= mid+1;
        else if(arr[mid]==s)
        {
            cout<<endl;
            cout<<"The number "<<s<<" is at index => "<<mid+1;
            cout<<endl;
            break;
        }
        else
            hi = mid-1;
            mid = (lo+hi)/2;
    }
    if(lo>hi)
        {
        cout<<endl;
        cout<<"The number "<<s<<" is not in the Array ";
        cout<<endl;
        }
    cout<<endl;
    return 0;
}
