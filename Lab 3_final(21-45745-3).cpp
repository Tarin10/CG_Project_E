#include<iostream>
using namespace std;

class Node
{
public:
    Node* next;
    int value;
    Node* prev;
    Node()
    {
        prev = NULL;
        next = NULL;
        value = 0;
    }
};

class DoublyLinkedList
{
public:
    Node* head;
    Node* tail;
    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void addFront(int x)
    {
        Node* newNode = new Node();
        newNode->value = x;
        if(head==NULL)
        {
            head  = newNode;
            tail = newNode;
        }
        else
        {
          tail->next = newNode;
          newNode->prev=tail;
          tail=newNode;
        }
    }

    void printForward()
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout<<"Show the Value: "<<temp->value<<" " <<endl;
            temp = temp->next;
        }
    }

};

int main()
{
    DoublyLinkedList d;
    d.addFront(5);
    d.addFront(9);
    d.printForward();
}
