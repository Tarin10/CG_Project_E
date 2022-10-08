#include<iostream>
using namespace std;

void decode(string s, int j)
{
    int i,x;
    for(i = j; i < s.size(); i = i+j)
    {
        x = s[i];
        s[i] = (char)(x + j);
    }
    cout << "\nConverted String: " << s;
    cout << endl << endl;
}
int main()
{
    string s;
    int j;
    cout<< "Enter the string : ";
    getline(cin,s);
    cout<<"Enter value that you want to change : ";
    cin>> j;
    decode(s,j);
}
