// print the given level value in tree
#include<iostream>
#include<queue>
using namespace std;
class node
{
    public:
    node *left;
    node *right;
    int value;
    
    node(int v)
    {
        left = NULL;
        right = NULL;
        value = v;
    }
    node ()
    {
        left = NULL;
        right= NULL;
        value = 0;
    }
   void print_level(int k)
   {
    if (this==NULL)
    return ;
    if(k == 1)
    cout<<value<<" ";
    else {
        this->left->print_level(k-1);
        this->right->print_level(k-1);
    }
   }
};
int main()
{
    node *root = new node(1);
    root->right = new node(3);
    root->left = new node(2);
    root->left->left = new node(4);
    root->left->right= new node (5);
    root->right->left = new node(6);
    root->left->left->left = new node (7);
    root->left->left->right =new node(8);
    root->left->left->right->left = new node(9);
    root->left->left->right->right = new node(10);
    root->print_level(3);
    
}