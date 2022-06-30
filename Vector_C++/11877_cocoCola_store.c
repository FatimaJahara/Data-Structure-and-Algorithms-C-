#include<stdio.h>
int main()
{
    int n,div,rem,total,z;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        break;
        total=0;
        while(n>=3)
        {
            div=n/3;
            rem=n%3;
            n=div+rem;
            total=total+div;
            z=n+1;
            if(n<3 && z==3)
            {
                ++total;

            }
        }
        printf("%d\n",total);
    }
    return 0;
}
