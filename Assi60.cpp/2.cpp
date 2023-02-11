// search the element in the binary search tree
#include<iostream>
using namespace std;
class node 
{
    
    node *left;
    node *right;
    int value;
    public:
    node(int v)
    {
        left = NULL;
        right = NULL;
        value = v;
    }
    node()
    {
        left =NULL;
        right =NULL;
        value = 0;
    }
    node* Insert_BST(int v)
    {
        if(this == NULL)
        return new node (v);
        else {
            if(v >= value)
            this->right = this->right->Insert_BST(v);
            else
            this ->left = this->left->Insert_BST(v);
        }
    }
    void in_order()
    {
        if(this!=NULL)
        {
            left->in_order();
            cout<<value<<" ";
            right->in_order();
        }
    }
    node* Search_node(int v)
    {
        if(this==NULL)
        cout<<"element not founded ";
        if(this->value == v)
        cout<<"element founded ";
        else 
        {
            if( v > value)
            this->right = right->Search_node(v);
            else 
            this->left = left->Search_node(v);
        }

    }
};
int main()
{
    node *root = new node(40);
    root->Insert_BST(50);
    root->Insert_BST(12);
    root->Insert_BST(14);
    root->Insert_BST(67);
    // root->in_order();
    root->Search_node(15);
}