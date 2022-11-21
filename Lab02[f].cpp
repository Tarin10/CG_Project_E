#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* nextNode;
           Node* newNode;
           Node* firstNode;
           Node* currentNode;

};


   void push(Node** f_ref, int n_data)
   {
       Node* newNode = new Node();
       newNode -> data = n_data;
       newNode -> nextNode = (*f_ref);
       (*f_ref) = newNode;
   }

 int getNthNode(Node* firstNode, int i)
{
    Node* currentNode = firstNode;
    int count = 0;
    while (currentNode != NULL)
    {
        if(count == i)
        {
            return (currentNode -> data);
            count++ ;
            currentNode = currentNode ->nextNode;
        }
    }
}

int main()
{
    Node* firstNode = NULL;
    push(&firstNode, 2);
    push(&firstNode, 6);
    push(&firstNode, 12);
    cout<<"Element at index: "<<getNthNode (firstNode, 2)<<endl;
    return 0;

}
