#include<iostream>
using namespace std;
struct Employee
{
    int id,sal,jy;
};
int main()
{
    int a=10;
    Employee d[a];
    for(int i=0;i<a;i++)
    {
        cout<<"\n";
        cout<<"Enter the ID: ";
        cin>>d[i].id;
        cout<<"Enter the salary: "  ;
        cin>>d[i].sal;
        cout<<"Enter the joining year: ";
        cin>>d[i].jy;
    }
    cout<< "\nJoin before 2009 and Salary more than 20000 :\n";
    for(int i=0;i<a;i++)
    {
        if(d[i].sal>20000 && d[i].jy<2009)
        {
            cout<<"\n";
            cout<<"Enter the ID: "<<d[i].id<<endl;
            cout<< "Employee Salary: "<<d[i].sal<<endl;
            cout<< "Employee Joining year: "<<d[i].jy<<endl;
        }
    }
}
