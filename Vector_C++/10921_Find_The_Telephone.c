#include<stdio.h>
char digit(char c)
{
    if(c=='0'||c=='1'||c=='-')
        return c;
    if(c<='C')
        return '2';
    if(c<='F')
        return '3';
    if(c<='I')
        return '4';
    if(c<='L')
        return '5';
    if(c<='O')
        return '6';
    if(c<='S')
        return '7';
    if(c<='V')
        return '8';
    if(c<='Z')
        return '9';
}
int main()
{
    int i,l;
    char s[30];
    while(scanf("%s",&s)!=EOF)
    {
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            putchar(digit(s[i]));
        }
        printf("\n");
    }
    return 0;
}
