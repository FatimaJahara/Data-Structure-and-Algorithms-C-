#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
struct Node* head;
void Insert(int data);
void Delete(int n);
void Print();
int main()
{
    head=NULL;
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);  ///5,4,3,2
    Print();
    printf("Enter the position:  ");
    int n;
    cin>>n;
    Delete(n);
    Print();
}
void Insert(int x)
{
    Node* temp=new Node();
    temp->data=x;
    temp->next=head;

    head=temp;
}
void Print()
{
    struct Node* temp=head;
    cout<<"List is: ";
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    cout<<"\n";
}
void Delete(int n)
{
    struct Node* temp=head;
    if(n==1)
    {
        head=temp->next;
        free(temp);
        return;
    }
    int i;
    for(i=0;i<n-2;i++)
        temp=temp->next; ///temp points to (n-1)th Node

    struct Node* temp2=temp->next;
    temp->next=temp2->next;
    free(temp2);  //delete temp2
}
