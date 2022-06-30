#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
Node* top;
void Push(int x);
void Pop();
void Print();
int main()
{
    top=NULL;
    Push(2);    ///2
    Print();
    Push(4);    ///4,2
    Print();
    Push(6);    ///6,4,2
    Print();
    Push(8);    ///8,6,4,2
    Print();
    Pop();      ///6,4,2
    Print();
    Push(10);   ///10,6,4,2
    Print();
}
void Push(int x)
{
    Node* temp=new Node();
    temp->data=x;
    temp->next=top;

    top=temp;
}
void Print()
{
    struct Node* temp=top;
    cout<<"Stack:";
    while(temp!=NULL)
    {
        printf(" %d",temp->data);
        temp=temp->next;
    }
    cout<<"\n\n";
}
void Pop()
{
    struct Node* temp=top;
    if(temp==NULL)
        return;
    top=temp->next;
    free(temp);
}
