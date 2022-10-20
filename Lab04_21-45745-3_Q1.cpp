#include <iostream>
using namespace std;
void bs(int arr[], int j)
{
  for (int s = 0;s<j;++s) {

    for (int i = 0; i < j - s; ++i) {
      if (arr[i] > arr[i + 1]) {
        int t = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = t;
      }
    }
  }
}

void printArray(int arr[], int j) {
  for (int i = 0; i < j; ++i) {
    cout << "  " << arr[i];
  }
  cout << "\n";
}
int main()
{
  int data[10];
   cout<<"Enter 10 Elements here: ";
    for(int i=0; i<10; i++){
        cin>>data[i];
    }
    cout<<endl;
  int size = sizeof(data) / sizeof(data[0]);
  bs(data, size);
  cout << "Bubble Sorted :\n";
  printArray(data, size);
}
