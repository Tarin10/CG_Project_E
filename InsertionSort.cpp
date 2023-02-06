#include<iostream>
using namespace std;


void bubbleSort(int array[], int n)
{
    int countP = 0;
    int comp = 0;
    int swapp = 0;

    for(int pass = 1; pass < n; pass++)
    {
        countP++;
        cout<<" The number of Pass : "<<pass<<endl;

        bool flag= true;
        for(int i=0; i< n-pass; i++)
        {
            cout<<"Comparing : "<<array[i]<<" & "<<array[i+1]<<endl;

            comp++;

           if(array[i] > array[i+1])
            {
                cout<<"Swapping : "<<array[i]<<" & "<<array[i+1]<<endl;
                swap(array[i],array[i+1]);

                flag = false;
                swapp++;

            }

        }


        if(flag)break;
        countP++;
    }

     cout<<"\n Total Pass : "<<countP<<endl;
     cout<<"\n Total Comparison : "<<comp<<endl;
     cout<<"\n Total Swapping : "<<swapp<<endl;



}

void insertionSort(int array[], int n)
{
    int i,j,key;
    int comp = 0;
    int swapp = 0;
    for(i=1; i<n; i++)
    {
        key = array[i];
        j = i-1;
        while(j>=0 && array[j]>key)
        {
            comp++;
            array[j+1] = array[j];
            j= j-1;
            swapp++;
        }
        array[j+1] = key;
    }
    cout<<"\n Total Comparison :"<<comp<<endl;
    cout<<"\n Total Swapping :"<<swapp<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
}

int main()
{
    int array[10] = {33,66,22,99,77,11,91,55,88,44};
    bubbleSort(array, 10);
    insertionSort(array, 10);

    return 0;

}
