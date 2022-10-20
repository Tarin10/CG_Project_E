#include <iostream>
using namespace std;
int search(int arr[],int s,int j)
{
    int i;
    for (i=0;i<j;i++)
        {
        if (arr[i]==j)
            {
                return i;
            }
        }
    return -1;
}
int main(void)
{
    int i,j,e;
    cout <<"Enter the array size => ";
    cin >>j;
    int s[j];
    cout<< "Enter the array element => ";
    for (i=0;i<j;i++)
    {
        cin>>s[i];
    }
    cout <<"Search element => ";
    cin >> e;
    int r = search(s,j,e);
    if(r == -1)
    {
       cout<<"Element is unavailable ";
    }
    else
    {
       cout<<"The index number of the element => "<<r;
    }
    cout<<endl;
    return 0;
}
