#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int repeat[10];
    int i;
    int j;
    int total;

    cout << "Put 10 values into the array.  ";
    cout <<"\n=";
    for( i = 0; i < 10; i++)
    {
        cin >> a[i];
        repeat[i] = 0;
    }
    for( i = 0; i < 10; i++)
        {
        total = 1;
        for( j = i+1; j < 10; j++)
            {
            if(a[i] == a[j]){
                total++;
                repeat[j] = -1;
            }
        }
        if(repeat[i] == 0)
        {
            repeat[i] = total;
        }
    }
    cout <<"\n";
    for( i = 0; i < 10; i++)
        {

        if(repeat[i] != -1)
        {
            cout<< a[i] <<" occurs - " << repeat[i] << " times."<<endl;
        }
    }
    return 0;
}

