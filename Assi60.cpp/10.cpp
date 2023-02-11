// find the n nod in the binary tree
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
        right =NULL;
        left=NULL;
        data = v;
    }
    void inorder(int r)
    {
       static int c =0;
        if(this==NULL)
        return ;
            if(c <= r){
            c++;
            this->left->inorder(r);
            if(c == r)
            cout<<this->data<<" ";
            this->right->inorder(r);
            }
    }
};
int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right= new node(30);
    root->left->left= new node(40);
    root->left->right = new node(50);
    
    root->inorder(4);
}