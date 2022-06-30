#include<bits/stdc++.h>
using namespace std;
struct BSTNode
{
    int data;
    BSTNode* left;
    BSTNode* right;
};

BSTNode* GetNode(int data);
BSTNode* Insert(BSTNode* root,int data);
bool Search(BSTNode* root,int data);

int main()
{
    bool n;
    int x;
    BSTNode* root=NULL;
    root=Insert(root,15);
    root=Insert(root,10);
    root=Insert(root,20);
    root=Insert(root,17);
    root=Insert(root,25);
    root=Insert(root,7);
    cout<<"Enter : ";
    cin>>x;
    n=Search(root,x);
    if(n==true)
        cout<<x<<" Found!\n\n";
    else
        cout<<x<<" NOT Found!\n\n";

}
BSTNode* GetNode(int data)
{
    BSTNode* temp=new BSTNode();
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
BSTNode* Insert(BSTNode* root,int data)
{
    if(root==NULL)
    {
        root=GetNode(data);
    }
    else if(data<=root->data)
    {
        root->left=Insert(root->left,data);
    }
    else
    {
        root->right=Insert(root->right,data);
    }
            return root;

}
bool Search(BSTNode* root,int data)
{
    if(root==NULL)
        return false;
    else if(root->data==data)
        return true;
    else if(data<=root->data)
        return Search(root->left,data);
    else
        return Search(root->right,data);

}
