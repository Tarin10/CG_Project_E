#include<iostream>
using namespace std;

void print (int array[], int x)
{
    cout<<"\nEnter the Array =";
    for(int i=0; i<x-1; i++)
    {
        cout<<array[i];
        if(x<=0)
        {
            cout<<"/n";
        }
        else
        {
            cout<<array[x-1];
        }

    }
}

void insertionSort(int array[], int n)
{
    int i,j,key;
    int comp = 0;
    int swap = 0;
    for(i=1; i<n; i++)
    {
        key = array[i];
        j = i-1;
        while(j>=0 && array[j]>key)
        {
            comp++;
            array[j+1] = array[j];
            j= j-1;
            swap++;
        }
        array[j+1] = key;
    }
    cout<<"\n Total Comparison :"<<comp<<endl;
    cout<<"\n Total Swapping :"<<swap<<endl;
}

int main()
{
    int array[10] = {33,66,22,99,77,11,91,55,88,44};
    insertionSort(array, 10);
    print(array,10);
    return 0;

}
