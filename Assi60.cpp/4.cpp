// find the minimum element in the binary search tree
#include<iostream>
using namespace std; 
class node 
{
    node *right;
    node *left;
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
        left = NULL;
        right = NULL;
        value = 0;
    }
    int get_value()
    {
        return value;
    }
    node* insert(int v)
    {
        if(this==NULL)
        return new node(v);
        else {
            if( v > value)
            this->right = right->insert(v);
            else
            this->left = left->insert(v);
        }
    }
    int minElement()
    {
        
        node *s = this->left;
        while(s->left!=NULL)
        {
            s=s->left;
        }
        return s->value;
    }
    void preorder()
    {
        if(this!=NULL)
        {
            cout<<value<<" ";
            left->preorder();
            right->preorder();
        }
    }
};
int main()
{
    node *root = new node(40);
    root->insert(50);
    root->insert(23);
    root->insert(56);
    root->insert(6);
    root->insert(55);
    root->insert(33);
    root->insert(34);
    root->insert(616);
    root->preorder();
    // cout<<root->minElement();
}