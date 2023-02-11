// write a program to print element of  a tree at a given level using recursion
#include<iostream>
using namespace std;
 class node 
 {
    node *right;
    node *left;
    int data;
    public:
    node(int v)
    {
        right=NULL;
        left = NULL;
        data = v;
    }
    node()
    {
        left = NULL;
        right = NULL;
        data = 0;
    }
    node* insert(int v)
    {
        if(this== NULL)
        return new node(v);
        else {
            if(v > data)
            this->right = right->insert(v);
            else 
            this->left = left->insert(v);
        }
    }
    node* level_given(int l)
    {
        if(this == NULL)
        return NULL;
        if(l==1)
        cout<<data<<" ";
        else {
            this->left= this->left->level_given(l-1);
            this->right = this->right->level_given(l-1);
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
    root->level_given(2);
 }