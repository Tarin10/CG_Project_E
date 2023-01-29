#include <iostream>
#include<stdlib.h>
using namespace std;



void print(int arr[], int l, int s)
{
    cout<<"\nArray = [";
    for(int i=0; i <s-1; i++)
        cout<<arr[i]<<",";

    if(s <= 0)
        cout<<" ]\n";
    else
        cout<<arr[s-1]<<"]\n";
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[low];	// pivot
    int i = low;	// Index of smaller element

    cout<< "Low : "<<low<<" "<<endl;
    cout<<"High : "<<high<<" "<<endl;

    for (int j = low+1; j <= high; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        cout<<"  "<<j<<" ";

        if (arr[j] < pivot)
        {
            i++;
            cout<<endl;
            cout<<"Swap : "<<arr[i]<<" & "<<arr[j]<<endl;	// increment index of smaller element
            swap(arr[i], arr[j]);
            print(arr,low,high);
        }
    }
    cout<<"Swap : "<<arr[i]<<" & "<<arr[low]<<endl;
    swap(arr[i], arr[low]);
    print (arr,low,high);


    return i;
}

/* The main function that implements QuickSort arr[] --> Array to be sorted,
low	--> Starting index, high		--> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now at right place */
        int pi = partition(arr, low, high);
        cout<<arr[pi];
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
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

    print(myArray,0, ne);
    quickSort(myArray, 0, ne-1);
    cout<<"\n\nSorted array\n";
    print(myArray,0, ne);
    main();
}
