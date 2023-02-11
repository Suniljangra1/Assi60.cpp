// level order traversal in spiral form
#include<iostream>
using namespace std;
class node
{
    public:
    node *right;
    node *left;
    int data;
    node()
    {
        right = NULL;
        left = NULL;
        data = 0;
    }
    node(int v)
    {
        right = NULL;
        left = NULL;
        data = v;
    }
    int height()
    {
        if(this == NULL)
        return 0;
        int i= this->left->height();
        int j = this->right->height();
        if (i > j)
        return i+1;
        return j+1;
    }
    void level_currnt()
    {
        int h = this->height();
        for(int i=1; i<h; i++)
        this->Print_level(i);
    }
    node* Print_level(int i)
    {
        if(this== NULL)
        return NULL;
        else if(i== 1)
        {
            cout<<data<<" ";
            cout<<endl;
        }
        else {
            this->left->Print_level(i-1);
            this->right->Print_level(i-1);
        }
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
}