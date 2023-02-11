// find the maximum element in the binary search tree
#include<iostream>
using namespace std;
class node 
{
    node *left ;
    node *right;
    int value;
    public:
    node(int v)
    {
        left = NULL;
        right =NULL;
        value = v;
    }
    node()
    {
        left = NULL;
        right = NULL;
        value = 0;
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
    int maxElement()
    {
        if(this==NULL)
        return 0;
        node *s= this;
        while(s->right!=NULL)
        {
            s = s->right;
        }
        return (s->value);
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
    node *root = new node(34);
    root->insert(50);
    root->insert(23);
    root->insert(56);
    root->insert(616);
    
    
    cout<<"max element is "<<root->maxElement();
    cout<<endl;
    root->preorder();
}