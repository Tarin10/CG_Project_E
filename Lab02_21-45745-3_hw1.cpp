#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int num;
    int total = 0;

    cout << "Put 10 values into the array.  ";
    cout <<"\n=";
    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cout << "Type an int you want to find? ";
    cout <<"\n=";
    cin >> num;
    cout << endl;

    for(int i = 0; i < 10; i++)
        {
        if(a[i] == num)
        {
            total++;
        }
    }

    cout << "The integer appeare in the array " << total << " times";
    return 0;

}
