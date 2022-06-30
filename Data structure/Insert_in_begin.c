#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;
void Insert(int x)
{
    struct Node* temp=(Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=head;

    head=temp;
}
void Print()
{
    struct Node* temp=head;
    cout<<"List is : "
    while(temp!=NULL)
    {
        printf("\t%d",temp->data);
        temp=temp->next;
    }
    cout<<"\n";
}
int main()
{
    int i,n;
    head=NULL;
    printf("How many numbers to be inserted?\n");
    cin>>n,x;
    for(i=0;i<n;i++)
    {
        cout<<"Enter : ";
        cin>>x;
        Insert(x);
        Print();
    }

}
