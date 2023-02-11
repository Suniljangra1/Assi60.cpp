// find the diameter of the binary tree 
#include<iostream>
using namespace std;
class node 
{
    public:
    int data;
    node *right;
    node *left;
    
    node(int v)
    {
        right =NULL;
        left= NULL;
        data =v;
    }
    node()
    {
        right = NULL;
        left = NULL;
        data= 0;
    }
    int height()
    {
        if(this==NULL)
        return 0;
        int l = left->height();
        int r = right->height();
        if(l>r)
        return l+1;
        return r+1;
    }
    int Diameter()
    {
        if(this== NULL)
        return NULL;
        int h = this->left->height();
        int h1 = this->right->height();
        return h1+h+1;
        
    }
    void preorder()
    {
        if(this!=NULL)
        {
            cout<<data<<" ";
            left->preorder();
            right->preorder();
        }
    }
}; 
int main()
{
    node* root =new node(4);
    root->left=new node(5);
    root->right= new node(6);
    root ->left->left=new node(3);
   root->right->left = new node(2);
   root->right->left->right = new node(1);
    cout<<"Diameter is "<<root->Diameter();
    // root->preorder();
    
}