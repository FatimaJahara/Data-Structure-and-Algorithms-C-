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
bool Check(char *c,int l);
bool IsEmpty();
char topp()
{
    char n=top->data;
    return n;
}
int main()
{
    bool check;
    int i,l;
    top=NULL;
    char s[100];
    cout<<"Enter a String : ";
    gets(s);
    l=strlen(s);
    check=Check(s,l);
    if(check==true)
        cout<<"Parenthesis is balanced\n\n";
    else
        cout<<"Parenthesis is not balanced!!\n\n";

}
void Push(char x)
{
    Node* temp=new Node();
    temp->data=x;
    temp->next=top;

    top=temp;
}
bool Check(char *s,int l)
{
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if((s[i]=='(') || (s[i]=='{') || (s[i]=='['))
            Push(s[i]);

        if((s[i]==')') || (s[i]=='}') || (s[i]==']'))
        {
            if(IsEmpty()==true)
                return false;
            if((topp()=='(' && s[i]!=')') || (topp()=='{' && s[i]!='}') || (topp()=='[' && s[i]!=']'))
            {
                return false;
            }
            if((topp()=='(' && s[i]==')') || (topp()=='{' && s[i]=='}') || (topp()=='[' && s[i]==']'))
            {
                Pop();
            }
        }
    }
    if(IsEmpty()==true)
        return true;
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
