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
int EvaluatePrefix(char *p,int l);
bool IsEmpty();
int Perform(char op,int a,int b);
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
    cout<<"Enter a String in Prefix : ";
    gets(s);
    l=strlen(s);
    int ans=EvaluatePrefix(s,l);
    cout<<"\nValue : "<<ans<<"\n\n";
}

void Push(int x)
{
    Node* temp=new Node();
    temp->data=x;
    temp->next=top;

    top=temp;
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
int EvaluatePrefix(char *p,int l)
{
    int i,ans,j;
    char c[100];
    j=l;
    for(i=0;i<l;i++)
        c[--j]=p[i];
    for(i=0;i<l;i++)
    {
        if(isdigit(c[i])==true)
        {

            int n=c[i]-'0';
            Push(n);
        }
        if(c[i]=='+' || c[i]=='-' || c[i]=='*' || c[i]=='/')
        {
            int op1=topp();
            Pop();
            int op2=topp();
            Pop();
            ans=Perform(c[i],op1,op2);
            Push(ans);
        }

    }
    return ans;
}

int Perform(char op,int a,int b)
{
    if(op=='+')
        return (a+b);
    if(op=='-')
        return (a-b);
    if(op=='*')
        return (a*b);
    if(op=='/')
        return (a/b);

}

