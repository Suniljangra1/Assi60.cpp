// find the height of the tree
#include<iostream>
using namespace std;
class node 
{
    public:
    node *right; 
    node *left;
    int data;
    
    node(int v)
    {
        data = v;
        left =NULL;
        right = NULL;
    }
    node()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }
    int height()
    {
        if(this==NULL)
        return 0;
        int i = this->left->height();
        int j = this->right->height();
        if (i > j)
        return i+1;
        else 
        return j+1;
    }
};
int main()
{
    node *root = new node(4);
    root->left = new node(5);
    root->right= new node(6);
    root->right->left = new node(2);
    root->right->left->right = new node(1);
    root->left->left= new node(3);
    cout<<"Height is "<<root->height();
}