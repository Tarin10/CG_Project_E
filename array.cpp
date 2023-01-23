#include<iostream>
using namespace std;


int main()
{
    int array[5],item,value;

    cout<<"Enter the Values :";
    for(int i=0; i<5; i++)
    {
        cin>>array[i];
    }

    cout<<"Print the Array :"<<endl;
    for(int j=0; j<5; j++)
    {
        cout<<array[j]<<" "<<endl;
    }

    cout<<"Enter the element to search :";
    cin>>item;
    for(int j=0; j<5; j++)
    {
        if(array[j] == item)
        {
            cout<<"The value is in the position number :"<<j<<endl;
            return j;
        }

    }


}
