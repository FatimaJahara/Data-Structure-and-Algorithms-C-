#include<stdio.h>
int main()
{
    int a,b,i;
    b=0;
    scanf("%d",&a);
    if(a>=1 && a<=30)
    {
    for(i=1;i<=a;i++)
    {
        b=b+a*a;
    }
    printf("%d\n",b);
    }
    return 0;
}
