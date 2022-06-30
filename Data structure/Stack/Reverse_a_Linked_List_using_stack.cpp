#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
Node* head;
void Insert(int x)
{
    Node* temp=new Node();
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
        head=temp;
    else{
    Node* temp2=head;
    while(temp2->next!=NULL)
        temp2=temp2->next;
    temp2->next=temp;
    }
}
void Print()
{
    struct Node* temp=head;
    while(temp!=NULL)
    {
        printf(" %d",temp->data);
        temp=temp->next;
    }
    printf("\n\n");
}
void Reverse()
{
    stack<struct Node*> n;
    Node* temp=head;
    while(temp!=NULL)
    {
        n.push(temp);
        temp=temp->next;
    }
    Node* temp1=n.top();

    head=temp1;
    n.pop();
    while(!n.empty())
    {
        temp1->next=n.top();
        n.pop();
        temp1=temp1->next;
    }
    temp1->next=NULL;
}
int main()
{
    head=NULL;
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);
    Print();
    Reverse();
    Print();
}
