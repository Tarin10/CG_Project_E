#include<iostream>
using namespace std;


    int A[5], size=5, front = -1, rear = -1;

    bool isEmpty()
    {
        if(front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if(rear == size-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enQueue(int element)
    {
        if(isFull()==true)
        {
            cout<<"Queue is Full";
        }
        else if(isEmpty()== true)
        {
            front = 0;
            rear = 0;
            A[rear] = element;
        }
        else
        {
            rear++;
            A[rear] = element;
        }
    }

    void deQueue()
    {
        if(isEmpty()== true)
        {
            cout<<"Queue is Empty";
        }
        else if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
    }

    int getFrontElement()
    {
        if(isEmpty() == true)
        {
            cout<<"No element is Found";
            return 0;
        }
        else
        {
            return A[front];
        }
    }

    void show()
    {
        if(isEmpty() == true)
        {
            cout<<"No element is Found";
        }
        else
        {
            for(int i=front; i<=rear; i++)
            {
                cout<<A[i]<<endl;


            }
        }
    }


 int main()
 {

     enQueue(5);
     enQueue(6);
     enQueue(7);
     deQueue();
     show();

 }
