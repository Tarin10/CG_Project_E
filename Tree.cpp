#include<iostream>
using namespace std;
class tree
{
    int value;
    tree *left,*right;
public:
    tree();
    tree(int);
    tree*insert(tree*,int);
    void inorder(tree*);
};
tree::tree():value(0),left(NULL),right(NULL)
{

}
tree::tree(int data)
{
    value = data;
    left=right=NULL;
}
tree*tree::insert(tree*root,int value)
{
    if(!root)
    {
        return new tree(value);
    }
    if(value>root->value)
    {
        root->right=insert(root->right,value);
    }
        else if (value<root->value)
        {
            root->left=insert(root->left,value);
        }
        return root;
    }
    void tree::inorder(tree*root)
    {
        if(!root)
        {
            return;
        }
        inorder(root->left);
        cout<<root->value<<endl;
        inorder(root->right);
    }
    int main()
    {
        tree t,*root=NULL;
        root=t.insert(root,10);
        t.insert(root,20);
        t.insert(root,30);
        t.insert(root,40);
        t.insert(root,50);
        t.insert(root,60);
        t.insert(root,70);
        t.insert(root,80);
        t.inorder(root);
        return 0;

    }

