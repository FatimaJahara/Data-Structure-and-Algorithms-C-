#include<stdio.h>
int main()
{
    int c,n,i,j,num[1000],total,count;
    float avg,a;
    scanf("%d",&c);
    for(j=1;j<=c;j++)
    {
        scanf("%d",&n);
        total=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&num[i]);

            total=total+num[i];
        }
        avg=(float)total/n;
        count=0;
        for(i=0;i<n;i++)
        {
            if(num[i]>avg)
                count++;
        }
        a=(float)count/(float)n*100;
        printf("%.3f%%\n",a);
    }
    return 0;
}
