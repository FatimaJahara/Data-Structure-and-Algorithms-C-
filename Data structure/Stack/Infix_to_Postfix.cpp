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
void InfixToPostfix(char *c,int l);
bool IsEmpty();
bool TopHasHigherPrecidence(char c);

char topp()
{
    char n=top->data;
    return n;
}

int main()
{
    //bool check;
    int i,l;
    top=NULL;
    char s[100];
    cout<<"Enter a String in Infix : ";
    gets(s);
    l=strlen(s);
    InfixToPostfix(s,l);
}
void Push(char x)
{
    Node* temp=new Node();
    temp->data=x;
    temp->next=top;

    top=temp;
}
void InfixToPostfix(char *c,int l)
{
    int i;
    string s;
    for(i=0;i<l;i++)
    {
        if(c[i]=='+' || c[i]=='-' || c[i]=='*' || c[i]=='/')
        {
            while(IsEmpty()==false && TopHasHigherPrecidence(c[i])==true && (topp()!='(' && topp()!='{' && topp()!='['))
            {
                s=s+topp();
                Pop();
            }
            Push(c[i]);
        }
        else if(c[i]=='(' || c[i]=='{' || c[i]=='[')
            Push(c[i]);

        else if(c[i]==')' || c[i]=='}' || c[i]==']')
        {
            while(topp()!='(' && topp()!='{' && topp()!='[')
            {
                s=s+topp();
                Pop();
            }
            Pop();
        }
        else
        {
            s=s+c[i];
        }
    }
    while(IsEmpty()==false)
    {
            s=s+topp();
            Pop();
    }
    cout<<"Postfix : "<<s;

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
bool IsEmpty()
{
    if(top==NULL)
        return true;
    else
        return false;
}
bool TopHasHigherPrecidence(char c)
{
    if(topp()=='*' && (c=='+' || c=='-'))
        return true;
    else if(topp()=='/' && (c=='+' || c=='-' || c=='*'))
        return true;
    else if(topp()=='+' && c=='-')
        return true;
    else
        return false;
}
