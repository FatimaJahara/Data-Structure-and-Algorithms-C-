#include<bits/stdc++.h>
using namespace std;
struct Node
{
    char data;
    struct Node* next;
};
Node* top;
void Push(char x);
void Pop();
void Print();
int main()
{
    int i;
    top=NULL;
    char s[100];
    cout<<"Enter a String : ";
    gets(s);
    for(i=0;i<strlen(s);i++)
        Push(s[i]);
    Print();
}
void Push(char x)
{
    Node* temp=new Node();
    temp->data=x;
    temp->next=top;

    top=temp;
}
void Print()
{
    struct Node* temp=top;
    //cout<<"Stack:";
    while(temp!=NULL)
    {
        printf("%c",temp->data);
        temp=temp->next;
    }
    cout<<"\n\n";
}
