#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Node
{
public:

      int value;
      Node* left;
      Node* right;

      Node()
      {
          value = -1;
          left = NULL;
          right = NULL;

      }
};

class BST
{
 public:

    Node* root;
    queue < Node* > q;
    BST()
    {
        root = NULL;
    }

    void insertBST(int x)
    {
        Node* newNode = new Node();
        newNode->value = x;
        if (root == NULL)
        {
            root == newNode;
            q.push(newNode);
        }
        else
        {
            Node* current = q.front();
            if(current->left == NULL)
            {
                current-> left = newNode;
                q.push(newNode);
            }

           else
           {
                current->right = newNode;
                q.push(newNode);
                q.pop();
           }
        }
    }

    void InOrder()
    {
        stack< Node* > s;
        Node* current = root;

        while(current != NULL || !s.empty())
        {
            while (current != NULL)
            {
                cout<< current->value <<" ";
                s.push(current);
                current = current-> left;
            }
            current = s.top();
            s.pop();
            cout<< current->value <<" ";
            current = current->right;
        }
    }
};

int main()
{
    BST tree;
      tree.insertBST(10);
      tree.insertBST(5);
      tree.insertBST(12);
      tree.insertBST(1);
      tree.insertBST(7);
      tree.InOrder();
      cout<<endl;
      return 0;

}
