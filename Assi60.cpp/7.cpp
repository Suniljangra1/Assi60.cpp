// zig-zag tree traversal 
#include<iostream> 
#include<queue>
using namespace std;
class node
{
    public:
    node *right;
    node *left;
    int data;
    
    node(int v)
    {
        left = NULL;
        right = NULL;
        data = v;
    }
    node()
    {
        left = NULL;
        right = NULL;
        data = 0;
    }
    
    void Print_current()
    {
        int h = this->height();
        for(int i=1; i<h; i++)
        this->Level_order(i);
    }
    node* Level_order(int i)
    {
        if(this==NULL)
        return NULL;
        else if(i==1)
        cout<<data<<" ";
        else 
        {
            this->right->Level_order(i-1);
            this->left->Level_order(i-1);
        }
    }
    int height()
    {
        if(this == NULL)
        return 1;
        int i= left->height();
        int j= right->height();
        if (i >j)
        return i+1;
        else
        return j+1;
    }
}; 
int main()
{
    node *root = new node(7);
    root->right = new node(7);
    root->right->left = new node(6);
    root->left= new node(9);
    root->left->left= new node(8);
    root->left->right=new node(5);
    root->left->left->left= new node(10);
    root->left->left->right= new node(2);
    root->Print_current();
}