#include<stdio.h>
int main()
{
    char str[1000];
    int i,l,m;
    while(scanf("%s",&str)!=EOF)
    {
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        m=str[i]-7;
        putchar(m);
    }
    printf("\n");
    }
    return 0;
}
