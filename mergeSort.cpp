#include<iostream>
using namespace std;

int mergeSort(int array[])
{
    int n =6;
    if(n<2)
    {
        cout<<"The Array";
        return 0;
    }

    int mid = n/2;
    int l = mid;
    int r = n - mid;
    for(int i=0; i<mid; i++)
    {
        //cout<<"Left Side of Array:"<<L[i]<<endl;
        l[i] = array[i];

    }
    for(int i=mid, i<n; i++)
    {
        r[i-mid] = array[i];
    }
    mergeSort(l);
    mergeSort(r);
    merge(l, r, array);
}

int merge(int l, int r, int array)
{
    int nL = sizeof(l)/sizeof(l[0]);
    int nR = sizeof(r)/sizeof(r[0]);
    int i, j, k;
    i = j = k = 0;

    cout<<"merge";
    while(i< nL && j< nR)
    {
        if(l[i] <= r[j])
        {
            array[k] = l[i];
            i = i+1;
        }
        else
        {
            array[k] = R[j];
            j = j+1;
        }
        k=k+1;
    }
}


















}
