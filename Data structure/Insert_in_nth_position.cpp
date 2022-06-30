#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
struct Node* head;
void Insert(int data,int n)
{
    struct Node* temp1=new Node();
    temp1->data=data;
    temp1->next=NULL;
    if(n==1)
    {
        temp1->next=head;
        head=temp1;
        return;
    }
    struct Node* temp2=head;
    for(int i=0;i<n-2;i++)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}
void Print()
{
    Node* temp=head;
    cout<<"LIST : ";
    while(temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    cout<<"\n";
}
int Count()
{
    int c=0;
   Node* temp=head;
   while(temp!=NULL)
   {
       c++;
       temp=temp->next;
   }
   return c;
}
int main()
{
    int n,i,data,pos,c;
    head=NULL;
    Insert(2,1);    ///2
    Insert(3,2);    ///2 3
    Insert(4,1);    ///4 2 3
    Insert(5,2);    ///4 5 2 3
    Insert(6,3);    ///4 5 6 2 3
    Print();
    printf("Enter no. of elements to be inserted : ");
    cin>>n;
    while(n--)
    {
        printf("\n\nEnter Data : ");
        cin>>data;
        printf("\nEnter Position : ");
        cin>>pos;

        if(pos>0 && pos<Count())
        {
            Insert(data,pos);
            cout<<"\n";
            Print();
        }
        else
            cout<<"\nInvalid Position ! \n";

    }
}


