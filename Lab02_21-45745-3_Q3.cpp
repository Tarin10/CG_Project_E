#include<iostream>
using namespace std;

int main()
{
    int a[10], b[15], size1, size2, i, j;
    cout<<" Enter First Array Size: "<<" ";
    cin>>size1;
    cout<<" Enter First Array Elements: "<<" ";
    for(i=0; i<size1; i++)
    {
        cin>>a[i];
    }

    cout<<" Enter Second Array Size: "<<" ";
    cin>>size2;
    cout<<" Enter Second Array Elements: "<<" ";
    for(i=0; i<size2; i++)
    {
        cin>>b[i];
    }

    cout<<" Uncommon elements of two Arrays: "<<" ";


            if(a[i]==b[i])
            {
                cout<<a[i]<<" ";
            }


    return 0;
}
