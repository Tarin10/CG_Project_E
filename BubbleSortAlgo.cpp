#include<iostream>
#include<stdlib.h>
using namespace std;

void print(int arr[], int s)
{
    cout<<"\nArray = [";
    for(int i=0; i <s-1; i++)
        cout<<arr[i]<<",";

    if(s <= 0)
        cout<<" ]\n";
    else
        cout<<arr[s-1]<<"]\n\n";
}


void bSort(int arr[], int n)
{
    int countP=0;
    int countC=0;
    int countS=0;
    /*CODE*/
    for(int pass = 1; pass < n; pass++)
    {

        countP++;

        cout<< "\n* PASS : "<<pass<<endl;
        print(arr,n);
        bool flag = true;
        for(int i=0; i< n-pass; i++)
        {
            cout<<"Comparing : "<<arr[i]<<" & "<<arr[i+1]<<endl;

            countC++;

           if(arr[i] > arr[i+1])
            {
                cout<<"Swapping : "<<arr[i]<<" & "<<arr[i+1]<<endl;
                swap(arr[i],arr[i+1]);

                flag = false;
                countS++;
                print(arr,n);

            }

        }


        if(flag)break;
        countP++;
    }
    /*CODE*/

     cout<<"\n Total Pass : "<<countP<<endl;
     cout<<"\n Total Comparison : "<<countC<<endl;
     cout<<"\n Total Swapping : "<<countS<<endl;
}
void iSort(int arr[],int n)
{
    int i,key,j;
    int countC=0,countS=0;
    for( i=1;i<n; i++)
    {

        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {


            countC++;
            arr[j+1]=arr[j];
            j=j-1;
            countS++;
        }

        arr[j+1]=key;
    }
     //cout<<"\n Total Pass : "<<countP<<endl;
     cout<<"\n Total Comparison : "<<countC<<endl;
     cout<<"\n Total Swapping : "<<countS<<endl;
}

int main()
{
    int ne;
    cout<< "\nHow many elements? ";
    cin>>ne;

    //Auto input
    int myArray[ne];
    for(int i=0; i<ne; i++)
    {
        myArray[i] = rand()%100;
    }
    print(myArray,ne);
    bSort(myArray,ne);
    print(myArray,ne);
    iSort(myArray,ne);
    print(myArray,ne);


    main();
}
