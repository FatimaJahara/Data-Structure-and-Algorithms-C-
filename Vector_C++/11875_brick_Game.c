#include<stdio.h>
int main()
{
    int t,i,n,p[10],mid,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&p[j]);

        }
        mid=(n/2);
        printf("Case %d: %d",i,p[mid]);
    }
    return 0;
}
