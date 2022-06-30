#include<bits/stdc++.h>
using namespace std;
struct BSTNode
{
    char data;
    BSTNode* left;
    BSTNode* right;
};
BSTNode* GetNode(char data);
BSTNode* Insert(BSTNode* root,char data);
void Preorder(BSTNode* root);
int main()
{
    BSTNode* root=NULL;
    root=Insert(root,'A');
    root=Insert(root,'B');
    root=Insert(root,'C');
    root=Insert(root,'D');
    root=Insert(root,'E');
    root=Insert(root,'F');
    root=Insert(root,'G');
    //root=Insert(root,'H');
    root=Insert(root,'I');
    root=Insert(root,'K');



}
BSTNode* Insert(BSTNode* root,char data)
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
BSTNode* GetNode(char data)
{
    BSTNode* temp=new BSTNode();
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
void Preorder(BST)
