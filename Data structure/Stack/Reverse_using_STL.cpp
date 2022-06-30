#include<bits/stdc++.h>
using namespace std;
void Reverse(char *s,int len)
{
    stack<char> c;
    int i;
    for(i=0;i<len;i++)
        c.push(s[i]);
    for(i=0;i<len;i++)
    {
        s[i]=c.top();
        c.pop();
    }
}
int main()
{
    int i;
    char s[100];
    cout<<"Enter a String : ";
    gets(s);
    Reverse(s,strlen(s));
    for(i=0;i<strlen(s);i++)
        cout<<s[i];
    cout<<"\n\n";
}
