#include <iostream>
#include<stdlib.h>
using namespace std;

int mcount = 0;
int mscount = 0;

void merge(int *,int, int , int );

void print(int arr[], int l, int h)
{
    cout<<"\nArray = [";
    for(int i=l; i <h; i++)
        cout<<arr[i]<<",";

    if(h<l)
        cout<<" ]\n";
    else
        cout<<arr[h]<<"]\n";
}

void merge_sort(int *arr, int low, int high)
{
    mscount++;
    int mid;

    cout<<"merge_sort("<<low<<" , "<<high<<")\n";

    if (low < high){
        mid=(low+high)/2;
        //divide the array at mid and sort independently using merge sort
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        //merge or conquer sorted arrays
        merge(arr,low,high,mid);
    }
    print(arr, low, high);
}
// Merge sort
void merge(int *arr, int low, int high, int mid)
{
    mcount++;
    cout<<"merge("<<low<<" , "<<mid<<" , "<<high<<")\n";
    int i= low, j = mid+1, k = 0, c[high-low+1];
    while (i <= mid && j <= high)
        if (arr[i] < arr[j])
            c[k++] = arr[i++];
        else
            c[k++] = arr[j++];

    while (i <= mid)
        c[k++] = arr[i++];
    while (j <= high)
        c[k++] = arr[j++];

    for (i = low; i <= high; i++)
        arr[i] = c[i-low];
}
// read input array and call merge sort
int main()
{
    int ne;
    cout<< "\nHow many elements? ";
    cin>>ne;

    //Auto input
    int myArray[ne];
    for(int i=0; i<ne; i++)
        myArray[i] = rand()%100;

    print(myArray, 0, ne-1);
    merge_sort(myArray, 0, ne-1);
    cout<<"\n\nSorted array\n";
    print(myArray, 0 , ne-1);
    cout<<"\nTotal merge count "<<mcount<<endl;
    cout<<"Total merge sort count "<<mscount<<endl;
    main();
}
