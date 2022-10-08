#include<iostream>
using namespace std;
int main()
{
    int row,column,a,b,arr[10][10],tr[10][10];
    cout<<"Row Size for Array? \n =";
    cin>>row;
    cout<<"Column Size for Array? \n=";
    cin>>column;
    cout<<"Please put "<<row*column<<" array values here : \n";
    for(a=0; a<row; a++)
    {
        for(b=0; b<column; b++)
            cin>>arr[a][b];
    }
    cout<<"Array is : \n";
    for(a=0; a<row; a++)
    {
        for(b=0; b<column; b++)
        cout<<" "<<arr[a][b];
        cout<<endl;
    }
    for (int a = 0; a < row; ++a)
      for (int b = 0; b < column; ++b)
        {
         tr[b][a] = arr[a][b];
        }
   cout << "Reverse array is : " << endl;
   for (int a = 0; a < column; ++a)
      for (int b = 0; b < row; ++b)
        {
         cout << " " << tr[a][b];
         if (b == row - 1)
            cout << endl << endl;
        }
    return 0;
}
