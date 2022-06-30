#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* Insert(Node* head,int x);
void Print(Node* head);
void ReversePrint(Node* head);
int main()
{
    Node* head=NULL;
    head=Insert(head,2);
    head=Insert(head,4);
    head=Insert(head,6);
    head=Insert(head,8);

    Print(head);
    ReversePrint(head);
}

Node* Insert(Node* head,int x)
{
    Node* temp=new Node();
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
        head=temp;
    else
    {
        Node* temp1=head;
        while(temp1->next!=NULL)
            temp1=temp1->next;
        temp1->next=temp;
    }
    return head;
}
void Print(Node* head)
{
    if(head==NULL)
    {
        printf("\n");
        return;
    }
    printf("%d ",head->data);
    Print(head->next);
}
void ReversePrint(Node* head)
{
    if(head==NULL)
    {
        return;
    }
    ReversePrint(head->next);

    printf("%d ",head->data);
}
