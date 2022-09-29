#include<iostream>
using namespace std;

int main()
{
    int array1[5], array2[4], mergedArray[10], i=0, j=0, k=0, InputOne, InputTwo, n;

    cout<<" Enter First Array Size: "<<" ";
    cin>>InputOne;
    cout<<" Enter First Array Elements: "<<" ";

    for(i=0; i<InputOne; i++)
    {
        cin>>array1[i];
    }
    cout<<" Enter Second Array Size: "<<" ";
    cin>>InputTwo;
    cout<<" Enter Second Array Elements: "<<" ";

    for(i=0; i<InputTwo; i++)
    {
        cin>>array2[i];
    }
    i=0;
     while(i<InputOne && j<InputTwo)
     {
         if(array1[i]< array2[j])
         {
             mergedArray[k++] = array1[i++];
         }
         else
         {
             mergedArray[k++] = array2[j++];
         }
     }

     while(i<InputOne)
     {
         mergedArray[k++] = array1[i++];
     }
     while(j<InputTwo)
     {
          mergedArray[k++] = array2[j++];
     }

     cout<<" Merged Array is: "<<" ";
     for(k=0; k<InputOne+InputTwo; k++)
     {
         cout<<mergedArray[k]<<" ";
     }
     cout<<endl;

     cout<<" Reversed Array is: "<<" ";
     for(int k=10; k>=0; k-- )
     {
         cout<< mergedArray[k]<<" ";
     }
    return 0;
}
