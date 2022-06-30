#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
struct Node* head;
void Insert(int x);
void Print(Node* p);
void Reverse(Node* p);
int main()
{
    head=NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(8);

    Print(head);
    Reverse(head);
    Print(head);
}

void Insert(int x)
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
}
void Print(Node* p)
{
    if(p==NULL)
    {
        printf("\n");
        return;
    }
    printf("%d ",p->data);
    Print(p->next);
}
void Reverse(Node* p)
{
    if(p->next==NULL)
    {
        head=p;
        return;
    }
    Reverse(p->next);

    Node* q=p->next;
    q->next=p;
    p->next=NULL;

}


