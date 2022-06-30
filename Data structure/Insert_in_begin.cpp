#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
struct Node* head;
void Insert(int x)
{
    //struct Node* temp=(Node*)malloc(sizeof(struct Node));
    Node* temp=new Node();
    temp->data=x;
    temp->next=head;

    head=temp;
}
void Print()
{
    struct Node* temp=head;
    cout<<"List is : ";
    while(temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    cout<<"\n\n";
}
int main()
{
    int i,n,x;
    head=NULL;
    Insert(1);
    Insert(2);
    Insert(3);
    Print();

    printf("How many numbers to be inserted?\n");
    cin>>n,x;
    cout<<"Enter : ";

    for(i=0;i<n;i++)
    {
        cin>>x;
        Insert(x);
        Print();
    }


}
